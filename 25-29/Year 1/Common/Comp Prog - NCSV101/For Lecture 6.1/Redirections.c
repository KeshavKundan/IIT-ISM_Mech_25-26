#include<stdio.h>

int main()
{
	int i = 5555;
	int *p = &i;
	int **q = &p;
	printf("The value of i is %d.\n", i);
	printf("The address of i is %p. ", p);
	printf("The updated value of i (via p) is %d.\n", ++*p);
	printf("The address of p is %p. ", q);
	printf("The value of p (via q) is %p. ", *q);
	printf("The updated value of i (via q) is %d.\n", ++**q);
	printf("The final value of i is %d.\n", i);
	printf("The sizes of all the variables here are:\n");
	printf("sizeof(i) = %zd\n", sizeof(i));
	printf("sizeof(p) = %zd\n", sizeof(p));
	printf("sizeof(q) = %zd\n", sizeof(q));
	return 0;
}
