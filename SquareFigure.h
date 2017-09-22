#ifndef SQUARE_FIGURE_HPP
#define SQUARE_FIGURE_HPP

#include "Figure.h"

class SquareFigure: public Figure
{
public:
	SquareFigure(double* points, int number_of_points):
		Figure(points, number_of_points)
	{
	}
	void draw_figure()
	{
		Figure::draw_figure();
	}
};

#endif