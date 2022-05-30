#include <stdio.h>
#include <stdlib.h>


/*
To pass an array to a function, you simply specify the name of the array
To produce a pointer to an array, you need only specify the name of the array
This implies that in the call to the arraySum() function, what was passed to the function was actually a pointer to the array values
Explains why you are able to change the elements of an array from within a function
so, you might wonder why the formal parameter inside the function is not declared to a pointer
int array Sum(int *array, const int n)

the above is perfectly valid
    pointers and arrays are intimately realted in C
    this is why you can declare array to be or type "array of ints" inside the arraySum function or to be of type "pointer to int"
if you are going to be using index numbers to reference the elements of an array that is passed to a function, declare that corresponding formal parameter to be an array
        more correctly reflects the use of the array by the function
if you are using the argument as a pointer to the array, declare it to be of type pointer

*/

int arraySum(int array[], const int n){

    int sum = 0, *ptr;
    int *const arrayEnd = array + n;

    for(ptr = array; ptr < arrayEnd; ++ptr)
        sum += *ptr;

    return sum;
}

int arraySum2(int *array, const int n){

    int sum = 0;
    int *const arrayEnd = array + n;

    for(; array < arrayEnd; ++array)
        sum += *array;

    return sum;
}

int main()
{
    int arraySum(int array[], const int n);
    int values[10] = {3,7,-9,3,6,-1,7,9,1,-5};

    printf("T\he sum is %i\n", arraySum(values, 10));
    printf("T\he sum is %i\n", arraySum2(values, 10));
    return 0;
}
