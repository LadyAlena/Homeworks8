#include "RightTriangle.h"
#include "figure_analysis_triangle.h"

RightTriangle::RightTriangle(int a, int b, int c, int A, int B, int C) : Triangle("Прямоугольный треугольник", a, b, c, A, B, C) {
	CheckCorrectFigure();
}

bool RightTriangle::conditionFigure() {

	return C == 90;
}

void RightTriangle::CheckCorrectFigure() {

	if (!(Triangle::conditionFigure() || conditionFigure())) {
		throw figure_analysis_triangle(name, a, b, c, A, B, C, "сумма углов не равна 180 и угол C не равен 90");
	}
	else if (!Triangle::conditionFigure()) {
		throw figure_analysis_triangle(name, a, b, c, A, B, C, "сумма углов не равна 180");
	}
	else if (!conditionFigure()) {
		throw figure_analysis_triangle(name, a, b, c, A, B, C, "угол C не равен 90");
	}
	else {
		infoCreatingFigure();
	}
}
