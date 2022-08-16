#pragma once
#include "Figure.h"

class Quadrilateral : public Figure
{
protected:
	Quadrilateral(std::string name, int a, int b, int c, int d, int A, int B, int C, int D);

public:
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
	void GetSides() override;
	void GetAngles() override;

protected:
	bool conditionFigure() override;
	void infoCreatingFigure() override;
	void CheckCorrectFigure() override;

	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;
};

