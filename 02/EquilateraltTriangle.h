#pragma once
#include "Triangle.h"

class EquilateraltTriangle : public Triangle
{
public:
	EquilateraltTriangle(int a, int b, int c, int A, int B, int C);

protected:

	bool conditionFigure() override;

	void CheckCorrectFigure() override;
};

