#include <iostream>
#include <string>
#include "Figure.h"
#include "figure_analysis.h"

Figure::Figure(int side)
{
	name = "Фигура";
	this->side = side;

	CheckCorrectFigure();
}

Figure::Figure()
{
	name = "Фигура";
	side = 0;
}

int Figure::GetCountSides()
{
	return side;
}

std::string Figure::GetName()
{
	return name;
}

void Figure::GetSides() {}

void Figure::GetAngles() {}

bool Figure::conditionFigure()
{
	return side == 0;
}

void Figure::infoCreatingFigure()
{
	std::cout << GetName() << " (количество сторон " << GetCountSides() << ") создан" << std::endl;
}

void Figure::CheckCorrectFigure()
{
	if (!conditionFigure()) {
		throw figure_analysis(name, side, "количество сторон не равно 0");
	}
	else {
		infoCreatingFigure();
	}
}
