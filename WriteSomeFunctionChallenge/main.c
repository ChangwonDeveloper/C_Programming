#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
write three function in a single program
1. function which finds the greatest common divisor of two non-negative integer values and to return the result. (gcd) takes two ints
2. calculate the absolute value of a number
- should take as parameter a float and return a float
- test this function with ints and floats
3. compute the square root of a number
- if a negative argument is passed then a message is display and -1.0 should be returned
- should use the absoluteValue function as implemented in the above step.
*/

int gcd(int x, int y){
    int greatestCommonDivisor = 1;

    if(x == y){
        greatestCommonDivisor = x;
        return greatestCommonDivisor;
    }

    if(x > y){
        for(int i = 1; i <= x; i++){
            if(x % i == 0 && y % i == 0){
                greatestCommonDivisor = i;
            }
        }
    } else {
        for(int i = 1; i <= y; i++){
            if(x % i == 0 && y % i == 0){
                greatestCommonDivisor = i;
            }
        }
    }
    return greatestCommonDivisor;
}

float getAbsoluteValue(float x){
    float absoluteValue = 0.0;
    if( x < 0){
        absoluteValue = x * -1.0;
        return absoluteValue;
    } else{
        absoluteValue = x;
        return absoluteValue;
    }
}

float getSquareRoot(float x){
    float  squareRootValue = 0;
    if(x < 0){
        return -1.0;
    } else{
        squareRootValue = sqrt(x);
        return squareRootValue;

    }
}

int main()
{
    printf("%d\n\n", gcd(7,0));
    printf("%.3f\n\n", getAbsoluteValue(35425));
    printf("%.3f\n\n", getSquareRoot(-325));

    return 0;
}
