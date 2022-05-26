#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 33;
    int b = 15;
    int result = 0;
    _Bool aa = 1;
    _Bool bb = 0;
    _Bool result2;
    _Bool result3;

    result = a + b;

    printf("result is %d\n", result);

    printf("result is %d\n", a++);
    // ++a execute before printf so the result is 34
    printf("result is %d\n", ++a);

    result2 = a && b;
    result3 = a || b;

    printf("%d\n", result2);
    printf("%d\n", result3);

    return 0;
}
