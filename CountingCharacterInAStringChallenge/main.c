#include <stdio.h>
#include <stdlib.h>
/*
test your understanding of pointer arithmetic and the const modifier

write a function that calculates the length of a string
    the function should take as a parameter a const char pointer
    the function can only determine the length of the string using pointer arithmetic
            incrementaiton operator (++pointer) to get to the end of the string
    you are required to use a while loop using the value of the pointer to exit
    the function should subtract two pointers (one pointing to th end of the string and one pointing to the beginning of the string)
    the function should return an int that is the length of the string passesd into the function
*/

int stringLength(const char *str);
int stringLength2(const char *string);

int main()
{
    const char p[] = "chris";
    const char str[] = "This is a string";
    printf("%d\n", stringLength(str));

    printf("%d\n", stringLength(p));


    return 0;
}

int stringLength(const char *str){
    int index = 0;

    while(*str){
        index++;
        str++;
    }
    return index;
}

int stringLength2(const char *string){
    const char *lastAddress = string;

    while(*lastAddress){
        ++lastAddress;
    }

    return lastAddress - string;
}

