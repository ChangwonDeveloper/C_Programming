#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 10;
    float f = 2.33;
    char ch = 'k';

    void *vptr;

    vptr = &i;
    printf("Value of i = %d\n", *(int*)vptr);

    vptr = &f;
    printf("Value of f = %.2f\n", *(float*)vptr);

    vptr = &ch;
    printf("Value of ch = %.c\n", *(char*)vptr);

    return 0;
}