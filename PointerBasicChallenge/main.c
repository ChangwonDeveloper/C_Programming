#include <stdio.h>
#include <stdlib.h>
/*
learn how to create, initialize, assign, and access a pointer

create an integer variable with a hard-coded value. assign that variable's address to a pointer variable
display as output the address of the pointer, the value of the pointer, and the value of what the pointer is pointing to

*/
int main()
{
    int x = 0;
    int *px = NULL;
    px = &x;


    printf("Address of x is %p\n", &x);
    printf("Address of pointer is %p\n", &px);
    printf("value of pointer is %p\n", px);
    printf("value of pointer is pointing to is %d\n", *px);


    return 0;
}
