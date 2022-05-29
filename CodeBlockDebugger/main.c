#include <stdio.h>
#include <stdlib.h>

void print(int n1, int n2, int n3, double average);
double average(int a, int b, int c) ;

int main()
{
    int n1, n2, n3;

    printf("Enter : ");
    scanf("%d %d %d", &n1, &n2, &n3);

    print(n1, n2, n3, average(n1, n2, n3));

    return 0;
}

void print(int n1, int n2, int n3, double average){

    printf("Mean %d %d %d is %f\n", n1, n2, n3, average);
}

double average(int a, int b, int c){
    double sum;
    sum  = (a+b +c) / 3;
    return sum;
}
