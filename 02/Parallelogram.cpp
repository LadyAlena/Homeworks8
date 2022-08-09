#include "Parallelogram.h"
#include "figure_analysis_quadrilateral.h"

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral("Параллелограмм", a, b, c, d, A, B, C, D) {
	CheckCorrectFigure();
}

bool Parallelogram::conditionFigure() {

	return (a == c && b == d) && (A == C && B == D);
}

void Parallelogram::CheckCorrectFigure() {

	if (!(Quadrilateral::conditionFigure() || conditionFigure())) {
		throw figure_analysis_quadrilateral(name, a, b, c, d, A, B, C, D, "сумма углов не равна 360, и/или стороны a,c и b,d попарно не равны, и/или углы A,C и B,D попарно не равны");
	}
	else if (!Quadrilateral::conditionFigure()) {
		throw figure_analysis_quadrilateral(name, a, b, c, d, A, B, C, D, "сумма углов не равна 360");
	}
	else if (!conditionFigure()) {
		throw figure_analysis_quadrilateral(name, a, b, c, d, A, B, C, D, "и/или стороны a,c и b,d попарно не равны, и/или углы A,C и B,D попарно не равны");
	}
	else {
		infoCreatingFigure();
	}
}
