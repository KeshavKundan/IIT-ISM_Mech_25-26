#include<stdio.h>

int main()
{
	unsigned short op1 = 6;
	unsigned short op2 = 13;

	printf("This is a simple demonstration of bitwise operators\n");

	printf("%hu&%hu = %hu\n", op1, op2, op1&op2);
	printf("%hu|%hu = %hu\n", op1, op2, op1|op2);
	printf("~%hu = %hu in unsigned form\n", op1, ~op1);
	printf("~%hu = %hi in signed 2's complement form\n", op1, ~op1);
	printf("%hu<<1 = %hu\n", op1, op1<<1);
	printf("%hu<<2 = %hu\n", op1, op1<<2);
	printf("%hu>>1 = %hu\n", op1, op1>>1);
	printf("%hu>>2 = %hu\n", op1, op1>>2);
}
