#include <iostream>
#include "Quadrilateral.h"
#include "figure_analysis_quadrilateral.h"

Quadrilateral::Quadrilateral(std::string name, int a, int b, int c, int d, int A, int B, int C, int D) : Figure() {
	side = 4;
	this->name = name;
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
}

Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral("Четырехугольник", a, b, c, d, A, B, C, D) {
	CheckCorrectFigure();
}

void Quadrilateral::GetSides() {
	std::cout << "Стороны: " << "a = " << a << " b = " << b << " c = " << c << " d = " << d;
}

void Quadrilateral::GetAngles() {
	std::cout << "Углы: " << "A = " << A << " B = " << B << " C = " << C << " D = " << D;
}

bool Quadrilateral::conditionFigure() {

	return (A + B + C + D) == 360;
}

void Quadrilateral::infoCreatingFigure() {
	std::cout << GetName() << " (";
	GetSides();
	std::cout << "; ";
	GetAngles();
	std::cout << ") создан" << std::endl;
}

void Quadrilateral::CheckCorrectFigure() {
	if (!conditionFigure()) {
		throw figure_analysis_quadrilateral(name, a, b, c, d, A, B, C, D, "сумма углов не равна 360");
	}
	else {
		infoCreatingFigure();
	}
}
