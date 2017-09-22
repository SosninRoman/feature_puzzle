#ifndef CIRCLE_FIGURE_HPP
#define CIRCLE_FIGURE_HPP

#include "Figure.h"

class CircleFigure: public Figure
{
public:
	CircleFigure(double* points, int number_of_points):
		Figure(points, number_of_points)
	{
	}
	void draw_figure()
	{
		//draw circle
	}
};

#endif