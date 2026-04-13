#include<stdio.h>

typedef struct sample_struct
{
    int i;
    double d;
    char c;
} str; // Alias "str" created for the template

typedef union sample_union
{
    int i;
    double d;
    char c;
} un; // Alias "un" created for the template

int main()
{
    str s;
    printf("Size of s: %zu\n", sizeof(s));
    s.i = 5;
    printf("[A]. Printing s: %d, %lf, %c\n", s.i, s.d, s.c);
    s.d = 6.5;
    printf("[B]. Printing s: %d, %lf, %c\n", s.i, s.d, s.c);
    s.c = 'd';
    printf("[C]. Printing s: %d, %lf, %c\n", s.i, s.d, s.c);

    un u;
    printf("Size of u: %zu\n", sizeof(u));
    u.i = 5;
    printf("[A]. Printing u: %d, %lf, %c\n", u.i, u.d, u.c);
    u.d = 6.5;
    printf("[B]. Printing u: %d, %lf, %c\n", u.i, u.d, u.c);
    u.c = 'd';
    printf("[C]. Printing u: %d, %lf, %c\n", u.i, u.d, u.c);

    return 0;
}
