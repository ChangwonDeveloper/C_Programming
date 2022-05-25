#include <stdio.h>

int main(){

    char str[100];
    int i;
    double x;

    printf("Enter a value : ");

    scanf("%d %s %lf", &i, str, &x);

    printf("\nYou entered : %d::::::::::::%s\n", i, str);

    return 0;
}
