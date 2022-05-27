#include <stdio.h>
#include <stdlib.h>


int myglobal = 0; // global variable


int main()
{
    int myLocalMain = 0; // local variable
    // can access my global and myLocal
    return 0;
}

void myFunction()
{

    int x; // local variable
    myglobal = 3;
    printf("%d", myglobal);
    // can access myGlobal and x, cannot access myLocal
}
