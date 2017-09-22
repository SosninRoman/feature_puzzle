#include "Feature.h"
#include "Figure.h"
#include "SquareFigure.h"
#include "TriangleFigure.h"
#include "CircleFigure.h"

enum FeatureType {eCircle = 1, eTriangle, eSquare};

Feature::Feature():
	mFigure(nullptr)
{
}

Feature::~Feature()
{
	delete mFigure;
}

void Feature::draw()
{
	mFigure->draw_figure();
}

bool Feature::read(FILE* file)
{
	if (file == nullptr)
		return false;

	int type;
    if (fread(&type, sizeof(int), 1, file) != 1)
        return false;

	if(! type)
		return false;

	mFigure = createFigure(file, type);
		
	return true;
}

Figure* Feature::createFigure(FILE* file, int type)
{
    short n = 0;
    switch ( type ) 
    {
	case eCircle:		n = 3; break;
    case eTriangle:     n = 6; break;
    case eSquare:       n = 8; break;
    default: return nullptr;
    }

    double* points = new double[n];

    if(fread(points, n* sizeof(double), 1, file) != 1)
		return nullptr;

	switch ( type ) 
    {
	case eCircle:		return new CircleFigure(points, n) ;
	case eTriangle:     return new TriangleFigure(points, n) ;
	case eSquare:       return new SquareFigure(points, n) ;
    default: return nullptr;
    }
}