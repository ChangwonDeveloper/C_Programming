#include <stdio.h>
#include <stdlib.h>

struct date{
    int month;
    int day;
    int year;

};

struct intPtrs{
    int *p1;
    int *p2;
};


// boths are valid, but big differences
//
struct names{
    char first[20];
    char last[20];
};

struct pnames{
    char *first;
    char *last;
};

int main()
{

    struct date today, *datePtr;

    datePtr = &today;

    datePtr->month = 9;
    datePtr->day = 25;
    datePtr->year = 2015;

    printf("Today's date is %i/%i/%.2i\n", datePtr->month, datePtr->day, datePtr->year % 100);

    struct intPtrs pointers;
    int i1 = 100, i2;

    pointers.p1 = &i1;
    pointers.p2 = &i2;
    *pointers.p2 = -97;

    printf("i1=%i, *pointers.p1 = %i\n", i1, *pointers.p1);
    printf("i2=%i, *pointers.p2 = %i\n", i2, *pointers.p2);


    return 0;
}
