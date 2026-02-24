#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c, D;

	printf("Please formulate your equation in the form ax^2 + bx + c = 0\n");
	printf("Then provide the values for the parameters in the order a, b and c\n");
	printf("Example: a=1, b=2, c=-15\n");
	scanf("a=%d, b=%d, c=%d", &a, &b, &c);

	D = b * b - 4 * a * c;

	if(D == 0) {
		double x = -b / 2 * a;
		printf("The root of the equation (%d)x^2 + (%d)x + (%d) = 0 is %lf\n", a, b, c, x);
	}
	else if(D > 0) {
		double rootD = sqrt(D);
		double x1 = (-b + rootD) / (2 * a);
		double x2 = (-b - rootD) / (2 * a);
		printf("The roots of the equation (%d)x^2 + (%d)x + (%d) = 0 are %lf and %lf\n", a, b, c, x1, x2);
	}
	else {
		printf("The equation (%d)x^2 + (%d)x + (%d) = 0 does not have real roots\n", a, b, c);
	}

	return 0;
}
