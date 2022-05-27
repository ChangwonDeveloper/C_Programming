#include <stdio.h>
#include <stdlib.h>

void multiplyTwoNumbers (int x, int y){
    int result = x * y;
    printf("The product of %d multiplied by %d is : %d\n", x,y,result);
}

int multiplyTwoNumbersInvoke (int x, int y){
    int result = x * y;
    return result;
}

int main()
{
    multiplyTwoNumbers(10,20);
    multiplyTwoNumbers(20,30);
    multiplyTwoNumbers(30,40);

    int result = 0;
    result = multiplyTwoNumbersInvoke (10,20);
    printf("result is %d\n", result);
    return 0;
}
