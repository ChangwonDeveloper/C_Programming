#include <stdio.h>
#include <stdlib.h>
/*
a program that allows a user to input a text string. The program will print text that was inputted. The program will utilize dynamic memory allocation

the user can enter the limit of the string they are entering
    you can use this limit when invoking malloc
the program should create a char pointer only, no character arrays
be sure to release the memory that was allocated

*/
int main()
{

    int strLimit = 0;
    char *str = NULL;

    printf("Enter limit of string : ");
    scanf("%d", &strLimit); // scanf take pointer.

    // difference between char str[10] and malloc(10*sizeof(char))
    str = (char *)malloc(strLimit * sizeof(char));

    // important
    if(str != NULL){
        printf("Enter text : ");
        scanf("%s", str);

        printf("%s", str); // str is pointer so do not need to dereference because it is string


    }

    free(str);

    return 0;
}
