#include <stdio.h>
#include <math.h>

int main()
{
	float x1, y1, x2, y2, x3, y3, xy12, xy23, xy13, ug1;
	float ug2, ug3;
	printf("Enter the coordinates of three points\n");
	printf("Enter x and y of the first point: \n");
	scanf_s("%f", &x1);
	scanf_s("%f", &y1);
	printf("Enter x and y of the second point: \n");
	scanf_s("%f", &x2);
	scanf_s("%f", &y2);
	printf("Enter x and y of the third point: \n");
	scanf_s("%f", &x3);
	scanf_s("%f", &y3);
	xy12 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
	xy12 = sqrt(xy12);
	printf("The first side is %.3f\n", xy12);
	xy23 = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);
	xy23 = sqrt(xy23);
	printf("The second side is %.3f\n", xy23);
	xy13 = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
	xy13 = sqrt(xy13);
	printf("The third side is %.3f\n", xy13);
	ug1 = (xy12 * xy12 + xy13 * xy13 - xy23 * xy23) / (2 * xy12 * xy13);
	ug2 = (xy12 * xy12 + xy23 * xy23 - xy13 * xy13) / (2 * xy12 * xy23);
	ug3 = (xy23 * xy23 + xy13 * xy13 - xy12 * xy12) / (2 * xy23 * xy13);
	if (ug1 > 0 && ug2 > 0 && ug3 > 0) printf("This is an acute triangle");
	else if (ug1 == -1 || ug2 == -1 || ug3 == -1) printf("Such a triangle does not exist");
	else if (ug1 < 0 || ug2 < 0 || ug3 < 0) printf("This is an obtuse triangle");
	else printf("This is a right triangle");
	return 0;
}
