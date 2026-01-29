#include <stdio.h>
#include <math.h>

int main()
{
	int a = 1;
	int b = 2;
	int c = -15;

	int D = b * b - 4 * a * c;

	double rootD = sqrt(D);

	double x1 = (-b + rootD) / (2 * a);
	double x2 = (-b - rootD) / (2 * a);

	printf("The roots of the equation (%d)x^2 + (%d)x + (%d) = 0 are %lf and %lf", a, b, c, x1, x2);
	return 0;
}
