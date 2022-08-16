#pragma once
#include "Figure.h"

class Triangle : public Figure {
protected:
	Triangle(std::string name, int a, int b, int c, int A, int B, int C);

public:
	Triangle(int a, int b, int c, int A, int B, int C);

	void GetSides() override;
	void GetAngles() override;

protected:
	bool conditionFigure() override;
	void infoCreatingFigure() override;
	void CheckCorrectFigure() override;

	int a;
	int b;
	int c;
	int A;
	int B;
	int C;
};

