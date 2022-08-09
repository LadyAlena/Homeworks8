#pragma once
#include <stdexcept>

class figure_analysis : public std::domain_error
{
public:
	figure_analysis(std::string nameFigure, int side, std::string msgError);

	virtual void infoErrorCreatingFigure();

protected:
	std::string nameFigure;
	int side;
};

