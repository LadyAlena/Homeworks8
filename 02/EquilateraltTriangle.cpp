#include "EquilateraltTriangle.h"
#include "figure_analysis_triangle.h"

EquilateraltTriangle::EquilateraltTriangle(int a, int b, int c, int A, int B, int C) : Triangle("�������������� �����������", a, b, c, A, B, C) {
	CheckCorrectFigure();
}

bool EquilateraltTriangle::conditionFigure() {

	return (a == c && a == b && b == c) && (A == 60 && B == 60 && C == 60);
}

void EquilateraltTriangle::CheckCorrectFigure() {

	if (!(Triangle::conditionFigure() || conditionFigure())) {
		throw figure_analysis_triangle(name, a, b, c, A, B, C, "����� ����� �� ����� 180, �/��� ��� ������� ������������ �� �����, �/��� ��� ���� ������������ �� ����� 60");
	}
	else if (!Triangle::conditionFigure()) {
		throw figure_analysis_triangle(name, a, b, c, A, B, C, "����� ����� �� ����� 180");
	}
	else if (!conditionFigure()) {
		throw figure_analysis_triangle(name, a, b, c, A, B, C, "�/��� ��� ������� ������������ �� �����, �/��� ��� ���� ������������ �� ����� 60");
	}
	else {
		infoCreatingFigure();
	}
}
