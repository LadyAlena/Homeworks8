#include "Rectangle.h"
#include "figure_analysis_quadrilateral.h"

Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral("�������������", a, b, c, d, A, B, C, D) {
	CheckCorrectFigure();
}

bool Rectangle::conditionFigure() {

	return (a == c && b == d) && (A == 90 && B == 90 && C == 90 && D == 90);
}

void Rectangle::CheckCorrectFigure() {

	if (!(Quadrilateral::conditionFigure() || conditionFigure())) {
		throw figure_analysis_quadrilateral(name, a, b, c, d, A, B, C, D, "����� ����� �� ����� 360, �/��� ������� a,c � b,d ������� �� �����, �/��� ���� A, C, B, D �� ����� 90");
	}
	else if (!Quadrilateral::conditionFigure()) {
		throw figure_analysis_quadrilateral(name, a, b, c, d, A, B, C, D, "����� ����� �� ����� 360");
	}
	else if (!conditionFigure()) {
		throw figure_analysis_quadrilateral(name, a, b, c, d, A, B, C, D, "�/��� ������� a,c � b,d ������� �� �����, �/��� ���� A, C, B, D �� ����� 90");
	}
	else {
		infoCreatingFigure();
	}
}