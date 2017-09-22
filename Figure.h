#ifndef FIGURE_HPP
#define FIGURE_HPP
#include <algorithm>

class Figure
{
public:
	Figure(double* points, int number_of_points):
		number_of_points(number_of_points)
	{
		this->points = new double[this->number_of_points];
		std::copy(points, points+number_of_points, this->points);
	}
	virtual void draw_figure()
	{
		//draw poligon with number_of_points vertices	
	}
	virtual ~Figure()
	{
		delete [] points;
	}
private:
	double* points;
	int number_of_points;
};

#endif