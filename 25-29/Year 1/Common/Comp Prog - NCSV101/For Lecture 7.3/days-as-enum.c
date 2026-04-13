#include<stdio.h>

typedef enum Day_of_Week { MON, TUE, WED, THU, FRI, SAT, SUN } DAY;
// We can now use DAY as an alias for this enum

DAY nextDay(DAY today)
{
    return (today + 1) % 7;
}

DAY prevDay(DAY today)
{
    return (7 + today - 1) % 7;
}

int main()
{
    DAY today = SUN, yesterday, tomorrow;

    printf("Today is Sunday, it is represented as %d\n", SUN);
    printf("Tomorrow is Monday, it represented as %d\n", MON);
    printf("Yesterday was Saturday, it represented as %d\n", SAT);

    tomorrow = nextDay(today);
    yesterday = prevDay(today);
    printf("Enum representations for the all three: ");
    printf(" %d, %d, %d\n", today, tomorrow, yesterday);

    printf("The size of the enum: %zu\n", sizeof(today));
    return 0;
}
