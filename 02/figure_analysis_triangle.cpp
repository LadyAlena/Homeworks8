#include <iostream>
#include "figure_analysis_triangle.h"

figure_analysis_triangle::figure_analysis_triangle(std::string nameFigure, int a, int b, int c, int A, int B, int C, std::string msgError) : figure_analysis(nameFigure, 3, msgError) {
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
}

void figure_analysis_triangle::infoErrorCreatingFigure()
{
	std::cout << nameFigure << " (������� " << a << " " << b << " " << c << " " << "; ���� " << A << " " << B << " " << C << ") �� ��� ������. " << "�������: " << what() << std::endl;
}
