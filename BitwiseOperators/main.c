#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a = 60; // 0000 0000 0000 0000 0000 0000 0011 1100
    unsigned int b = 13; // 0000 1101
    int result = 0;

    // 0000 1100 = 12
     result = a & b;
    printf("result is %d\n", result);

    // 0011 1101 = 61
    result = a | b;
    printf("result is %d\n", result);

    // 0011 0001
    result = a ^ b;
    printf("result is %d\n", result);

    // 1111 0000
    result = a << 2;
    printf("result is %d\n", result);

    // 0011 1100 0000
    result = a << 4;
    printf("result is %d\n", result);

    // The number dropped off. Be careful
    // 0000 0011
    result = a >> 4;
    printf("result is %d\n", result);

    return 0;
}
