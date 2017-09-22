#ifndef TRIANGLE_FIGURE_HPP
#define TRIANGLE_FIGURE_HPP

#include "Figure.h"

class TriangleFigure: public Figure
{
public:
	TriangleFigure(double* points, int number_of_points):
		Figure(points, number_of_points)
	{
	}
	void draw_figure()
	{
		Figure::draw_figure();
	}
};

#endif