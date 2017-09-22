#include <stdio.h>
#include "Feature.h"

int main(int argc, char* argv[])
{
	//���������� �������� ������
	FILE* file = fopen("features.dat", "wb");
	int n = 1;
	double* points = new double[3];
	points[0] = 55.24;
	points[1] = 3.15;
	points[2] = 19.02;

	fwrite(&n,sizeof(n),1,file);
	fwrite(points,3*sizeof(double), 1, file);

	fclose(file);
	//
	file = fopen("features.dat", "rb");
	int r;
	double* rpoints = new double[3];
	fread(&r,sizeof(r),1,file);
	int num = fread(rpoints,3*sizeof(double), 1, file);
	fclose(file);
	//
    Feature feature;
	file = fopen("features.dat", "rb");
    feature.read(file);
    if (!feature.isValid())
        return 1;
    return 0;
}
