#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct date{
        int month;
        int day;
        int year;
    };

    struct date today;

    today.month = 9;
    today.day = 1;
    today.year = 1998;

    printf("Today's date is %i%i%.2i\n", today.month, today.day, today.year);

    return 0;
}
