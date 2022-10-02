#include <stdio.h>
#include <math.h>

int main()
{
	float x, y, xy;
	printf("Enter the coordinates of the point:\n");
	scanf_s("%f", &x);
	scanf_s("%f", &y);
	xy = x * x + y * y;
	xy = sqrt(xy);
	if (xy > 1) printf("The point is not in the circle");
	else if (y > 0) printf("The point lies at the top of the circle");
	else printf("The point does not lie at the top of the circle");
	return 0;
}
