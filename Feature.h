#ifndef FEATURE_HPP
#define FEATURE_HPP
#include <memory>

class Figure;

class Feature
{
	Figure* mFigure;
public:	
	Feature();
	
	~Feature();

	bool isValid()
	{
		return mFigure != nullptr;
	}

	void draw();

	//������� ���������� ������ ����� � �������������,  
	//��� ���� ��������
	bool read(FILE* file);
protected:
	Figure* createFigure(FILE* file, int type);
};

#endif