#include "Rectangle.h"
#include "figure_analysis_quadrilateral.h"

Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral("Прямоугольник", a, b, c, d, A, B, C, D) {
	CheckCorrectFigure();
}

bool Rectangle::conditionFigure() {

	return (a == c && b == d) && (A == 90 && B == 90 && C == 90 && D == 90);
}

void Rectangle::CheckCorrectFigure() {

	if (!(Quadrilateral::conditionFigure() || conditionFigure())) {
		throw figure_analysis_quadrilateral(name, a, b, c, d, A, B, C, D, "сумма углов не равна 360, и/или стороны a,c и b,d попарно не равны, и/или углы A, C, B, D не равны 90");
	}
	else if (!Quadrilateral::conditionFigure()) {
		throw figure_analysis_quadrilateral(name, a, b, c, d, A, B, C, D, "сумма углов не равна 360");
	}
	else if (!conditionFigure()) {
		throw figure_analysis_quadrilateral(name, a, b, c, d, A, B, C, D, "и/или стороны a,c и b,d попарно не равны, и/или углы A, C, B, D не равны 90");
	}
	else {
		infoCreatingFigure();
	}
}