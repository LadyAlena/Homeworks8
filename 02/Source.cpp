#include <iostream>
#include <string>
#include "figure_analysis.h"
#include "figure_analysis_triangle.h"
#include "figure_analysis_quadrilateral.h"
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateraltTriangle.h"
#include "Quadrilateral.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Rhomb.h"
#include "Square.h"

int main(int argc, char* argv[]) {

	setlocale(LC_ALL, "ru");

	try{

		/*Figure figure1(0);
		Figure figure2(1);*/

		/*Triangle figure1(10, 20, 30, 60, 50, 70);
		Triangle figure2(10, 20, 30, 40, 90, 60);*/

		/*RightTriangle figure1(53, 467, 23, 40, 50, 90);
		RightTriangle figure2(32, 89, 90, 30, 60, 100);*/

		/*IsoscelesTriangle figure1(10, 20, 10, 40, 100, 40);
		IsoscelesTriangle figure2(30, 15, 30, 35, 100, 40);*/

		/*EquilateraltTriangle figure1(63, 63, 63, 60, 60, 60);
		EquilateraltTriangle figure2(10, 10, 10, 45, 60, 60);*/

		/*Quadrilateral figure1(10, 20, 30, 40, 100, 100, 80, 80);
		Quadrilateral figure2(10, 20, 30, 40, 50, 60, 70, 80);*/

		/*Rectangle figure1(10, 20, 10, 20, 90, 90, 90, 90);
		Rectangle figure2(10, 20, 30, 40, 50, 60, 70, 80);*/

		/*Rhomb figure1(50, 50, 50, 50, 100, 80, 100, 80);
		Rhomb figure2(10, 20, 30, 40, 50, 60, 70, 80);*/

		/*Square figure1(10, 10, 10, 10, 90, 90, 90, 90);
		Square figure2(10, 20, 30, 40, 50, 60, 70, 80);*/

		/*Parallelogram figure1(10, 20, 10, 20, 100, 80, 100, 80);
		Parallelogram figure2(10, 20, 10, 20, 100, 50, 100, 50);*/

	}
	catch (figure_analysis &exc) {
		exc.infoErrorCreatingFigure();
	}
	catch (std::domain_error& exc) {
		std::cout << exc.what() << std::endl;
	}

	return 0;
}