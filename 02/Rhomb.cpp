#include "Rhomb.h"
#include "figure_analysis_quadrilateral.h"

Rhomb::Rhomb(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral("Ромб", a, b, c, d, A, B, C, D) {
	CheckCorrectFigure();
}

bool Rhomb::conditionFigure() {

	return (a == b && a == c && a == d && b == c && b == d && c == d) && (A == C && B == D);
}

void Rhomb::CheckCorrectFigure() {

	if (!(Quadrilateral::conditionFigure() || conditionFigure())) {
		throw figure_analysis_quadrilateral(name, a, b, c, d, A, B, C, D, "сумма углов не равна 360, и/или стороны a, c, b, d не равны, и/или углы A,C и B,D попарно не равны");
	}
	else if (!Quadrilateral::conditionFigure()) {
		throw figure_analysis_quadrilateral(name, a, b, c, d, A, B, C, D, "сумма углов не равна 360");
	}
	else if (!conditionFigure()) {
		throw figure_analysis_quadrilateral(name, a, b, c, d, A, B, C, D, "и/или стороны a, c, b, d не равны, и/или углы A,C и B,D попарно не равны");
	}
	else {
		infoCreatingFigure();
	}
}
