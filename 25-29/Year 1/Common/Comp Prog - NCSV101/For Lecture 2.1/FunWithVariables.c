#include<stdio.h>

int main()
{
	char c;
	int i;
	float f;
	double d;

	c = 65;
	printf("c = %c\n", c);
	c = -65;
	// The behaviour of above statement,
	// may be different on different implementations
	printf("c = %c\n", c);

	i = c; // implicit type conversion
	printf("i = %d\n", i);
	c = i; 
	// The above statement may produce a warning,
	// on some implementations
	printf("c = %c\n", c);

	f = 2.951678f;
	// The above statement creates
	// a floating point constant directly
	printf("f = %f\n", f);
	f = 2.95167863; // implicit type conversion
	// The above statement creates a double constant,
	// and performs type conversion to make it float,
	// which may involve "rounding"
	printf("f = %f\n", f);

	d = f; // implicit type conversion
	printf("d = %lf\n", d);
	d = 2.95167863; 
	// There may still be some rounding,
	// but the constant on the right,
	// is a double to begin with
	printf("d = %lf\n", d);
	i = d; // implicit type conversion
	// The above statement may produce a warning,
	// on some implementations
	printf("i = %d\n", i);
	// With or without a warning,
	// the decimal part is simply "truncated"

	printf("On this machine,\n");
	printf("int is %lu bytes,\n", sizeof(int));
	printf("float is %lu bytes,\n", sizeof(float));
	printf("double is %lu bytes,\n", sizeof(double));
	
	printf("The result of (i + c) takes %lu bytes\n", sizeof((i + c)));
	printf("The result of (i + f) takes %lu bytes\n", sizeof((i + f)));
	printf("The result of (i + d) takes %lu bytes\n", sizeof((i + d)));

}
