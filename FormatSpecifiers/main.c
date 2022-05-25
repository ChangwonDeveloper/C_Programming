#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';

    _Bool boolVar = 0;

    printf("integerVar = %i sdasda  %f\n", integerVar, floatingVar);
    // because f may display differently depends on machine %2.f output 2 decimal places
    printf("floatingVar = %7.f\n", floatingVar);
    // format are different by specifier
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);
    printf("boolVar = %i\n", boolVar);


    // precison with rounding
    float x = 3.9993323535;
    // output is 4
    printf("%.2f\n", x);
    printf("%.5f\n", x);

    return 0;
}
