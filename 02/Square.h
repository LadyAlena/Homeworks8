#pragma once
#include "Quadrilateral.h"

class Square : public Quadrilateral
{
public:
	Square(int a, int b, int c, int d, int A, int B, int C, int D);

protected:
	bool conditionFigure() override;
	void CheckCorrectFigure() override;
};

