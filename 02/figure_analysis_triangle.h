#pragma once
#include "figure_analysis.h"
class figure_analysis_triangle : public figure_analysis
{
public:
	figure_analysis_triangle(std::string nameFigure, int a, int b, int c, int A, int B, int C, std::string msgError);

	void infoErrorCreatingFigure() override;

protected:
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;
};

