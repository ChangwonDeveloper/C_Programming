#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10;
    int *pn = NULL;
    pn = &x;

    printf("This is a address of x %p\n", pn);
    printf("This is address of pointer pn %p\n", &pn);
    printf("This is the value of pointer is pointing to %d\n", *pn);


    int value = 0;
    int *pvalue = &value; // set pointer to refer to value
    printf("input an integer:");
    scanf(" %d", pvalue); // read into value via the pointer
    printf("You entered %d.\n", value); // output the value entered

    int *pon;
    *pon = 10;

    printf("%d", *pon);


    return 0;
}
