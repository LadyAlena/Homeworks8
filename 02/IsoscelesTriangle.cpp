#include "IsoscelesTriangle.h"
#include "figure_analysis_triangle.h"

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int c, int A, int B, int C) : Triangle("�������������� �����������", a, b, c, A, B, C) {
	CheckCorrectFigure();
}

bool IsoscelesTriangle::conditionFigure() {

	return (a == c) && (A == C);
}

void IsoscelesTriangle::CheckCorrectFigure() {

	if (!(Triangle::conditionFigure() || conditionFigure())) {
		throw figure_analysis_triangle(name, a, b, c, A, B, C, "����� ����� �� ����� 180, �/��� ������� � � � �� �����, �/��� ���� � � � �� �����");
	}
	else if (!Triangle::conditionFigure()) {
		throw figure_analysis_triangle(name, a, b, c, A, B, C, "����� ����� �� ����� 180");
	}
	else if (!conditionFigure()) {
		throw figure_analysis_triangle(name, a, b, c, A, B, C, "�/��� ������� � � � �� �����, �/��� ���� � � � �� �����");
	}
	else {
		infoCreatingFigure();
	}
}
