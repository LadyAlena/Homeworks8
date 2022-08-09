#pragma once
#include "figure_analysis.h"
class figure_analysis_quadrilateral : public figure_analysis
{
public:
	figure_analysis_quadrilateral(std::string nameFigure, int a, int b, int c, int d, int A, int B, int C, int D, std::string msgError);

	void infoErrorCreatingFigure() override;

protected:
	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;
};

