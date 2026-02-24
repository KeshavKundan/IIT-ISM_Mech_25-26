#include <stdio.h>

int main() {

    int a = 10, b = 3;
    int x = 5, y = 0;
    int i, j;
    int marks = 68;

    printf("=== Arithmetic Operators ===\n");
    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);   // integer division
    printf("a %% b = %d\n", a % b);

    printf("\n=== Relational Operators ===\n");
    printf("a > b  = %d\n", a > b);
    printf("a < b  = %d\n", a < b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);

    printf("\n=== Logical Operators ===\n");
    printf("x = %d, y = %d\n", x, y);
    printf("x && y = %d\n", x && y);
    printf("x || y = %d\n", x || y);
    printf("!x     = %d\n", !x);
    printf("!y     = %d\n", !y);

    printf("\n=== Assignment Operators ===\n");
    a = 10;
    printf("Initial a = %d\n", a);

    a += 5;
    printf("a += 5  -> %d\n", a);

    a *= 2;
    printf("a *= 2  -> %d\n", a);

    a -= 4;
    printf("a -= 4  -> %d\n", a);

    printf("\n=== Increment / Decrement Operators ===\n");
    i = 5;
    printf("Initial i = %d\n", i);
    printf("Postfix i++ = %d\n", i++);
    printf("After postfix, i = %d\n", i);

    j = 5;
    printf("Prefix ++j = %d\n", ++j);
    printf("After prefix, j = %d\n", j);

    printf("\n=== Conditional (Ternary) Operator ===\n");
    printf("Marks = %d\n", marks);
    printf("Result = %s\n", marks >= 75 ? "Distinction" :
                          marks >= 60 ? "First Class" :
                          marks >= 33 ? "Pass" : "Fail");

    return 0;
}
