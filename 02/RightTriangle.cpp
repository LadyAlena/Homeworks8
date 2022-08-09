#include "RightTriangle.h"
#include "figure_analysis_triangle.h"

RightTriangle::RightTriangle(int a, int b, int c, int A, int B, int C) : Triangle("������������� �����������", a, b, c, A, B, C) {
	CheckCorrectFigure();
}

bool RightTriangle::conditionFigure() {

	return C == 90;
}

void RightTriangle::CheckCorrectFigure() {

	if (!(Triangle::conditionFigure() || conditionFigure())) {
		throw figure_analysis_triangle(name, a, b, c, A, B, C, "����� ����� �� ����� 180 � ���� C �� ����� 90");
	}
	else if (!Triangle::conditionFigure()) {
		throw figure_analysis_triangle(name, a, b, c, A, B, C, "����� ����� �� ����� 180");
	}
	else if (!conditionFigure()) {
		throw figure_analysis_triangle(name, a, b, c, A, B, C, "���� C �� ����� 90");
	}
	else {
		infoCreatingFigure();
	}
}
