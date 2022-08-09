#include <iostream>
#include "figure_analysis_quadrilateral.h"

figure_analysis_quadrilateral::figure_analysis_quadrilateral(std::string nameFigure, int a, int b, int c, int d, int A, int B, int C, int D, std::string msgError) : figure_analysis(nameFigure, 4, msgError) {
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
}

void figure_analysis_quadrilateral::infoErrorCreatingFigure() {
	std::cout << nameFigure << " (стороны " << a << " " << b << " " << c << " " << d << "; углы " << A << " " << B << " " << C << " " << D << ") не был создан. " << "Причина: " << what() << std::endl;
}
