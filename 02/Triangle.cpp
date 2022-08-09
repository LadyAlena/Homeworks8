#include <iostream>
#include "Triangle.h"
#include "figure_analysis_triangle.h"

Triangle::Triangle(std::string name, int a, int b, int c, int A, int B, int C) : Figure() {
	side = 3;
	this->name = name;
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
}

Triangle::Triangle(int a, int b, int c, int A, int B, int C) : Triangle("�����������", a, b, c, A, B, C) {
	CheckCorrectFigure();
}

void Triangle::GetSides()
{
	std::cout << "������� " << " " << a << " " << b << " " << c;
}

void Triangle::GetAngles() {
	std::cout << "���� " << " " << A << " " << B << " " << C;
}

bool Triangle::conditionFigure() {

	return (A + B + C) == 180;
}

void Triangle::infoCreatingFigure() {
	std::cout << GetName() << " (";
	GetSides();
	std::cout << "; ";
	GetAngles();
	std::cout << ") ������" << std::endl;
}

void Triangle::CheckCorrectFigure() {
	if (!conditionFigure()) {
		throw figure_analysis_triangle(name, a, b, c, A, B, C, "����� ����� �� ����� 180");
	}
	else {
		infoCreatingFigure();
	}
}
