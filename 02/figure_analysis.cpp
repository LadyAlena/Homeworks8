#include <iostream>
#include "figure_analysis.h"

figure_analysis::figure_analysis(std::string nameFigure, int side, std::string msgError) : std::domain_error(msgError)
{
	this->nameFigure = nameFigure;
	this->side = side;
}

void figure_analysis::infoErrorCreatingFigure()
{
	std::cout << nameFigure << "(количество сторон " << side << ") не был создан. Причина: " << what() << std::endl;
}
