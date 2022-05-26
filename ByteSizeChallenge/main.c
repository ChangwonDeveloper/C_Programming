#include <stdio.h>
#include <stdlib.h>
// Purpose : create a C program that displays the byte size of basic data types supported in C
// the output varies depending on the system you are running the program
/*
display the byte size of the following types
int
char
long
long long
double
long double
You can use the %zd format specifier to format each size
use the sizeof operator

*/
int main()
{
    // represent in number of byte(8bits)
    printf("%zd\n",sizeof(int));
    printf("%zd\n",sizeof(char));
    printf("%zd\n",sizeof(long));
    printf("%zd\n",sizeof(long long));
    printf("%zd\n",sizeof(double));
    printf("%zd\n",sizeof(long double));
    printf("%zd\n",sizeof(short));
    printf("%zd\n",sizeof(float));
    return 0;
}
