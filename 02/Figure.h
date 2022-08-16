#pragma once
#include <string>

class Figure
{
public:
	Figure(int side);

	int GetCountSides();
	std::string GetName();

protected:
	Figure();

	virtual void GetSides();
	virtual void GetAngles();
	virtual bool conditionFigure();
	virtual void infoCreatingFigure();
	virtual void CheckCorrectFigure();

	std::string name;
	int side;
};