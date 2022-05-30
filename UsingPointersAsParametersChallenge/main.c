#include <stdio.h>
#include <stdlib.h>

/*
write a function that squares a number by itself
    the function should define as a parameter an int pointer

print out the value of variable and the value of the pointer
*/

void squareNum(int * const pnum);

int main()
{
    int num = 10;

    squareNum(&num);
    printf("The value of pointer is %p\n", &num);
    printf("The square of entered number is %d\n", num);
    return 0;
}

void squareNum(int * const num){

    *num = *num * *num;


}
