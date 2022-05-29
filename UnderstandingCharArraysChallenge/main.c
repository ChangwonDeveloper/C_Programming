#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/*
write a function to count the number of characters in a string (length)
    cannot use strlen library function
    function should take a character array as a parameter
    should return an int (the length)
write a function to concatenate two character strings
    cannot use the strcat library function
    function should take 3 parameters
        char result[]
        const char str1[]
        const char str2[]
        can return void
write a function that determines if two strings are equal
    cannot use strcmp library function
    function should take two const char arrays as parameters and return a boolean of true if they are equal and false otherwise


*/

int stringLength(char str1[]);
void stringConcatenate(char str1[], char str2[]);
bool areStringEquals(char str1[], char str2[]);

int main()
{
    char str[] = " safd";
    char strForConcatenate1[] = "Hello ";
    char strForConcatenate2[] = "World!";

    char strForEqual1[] = "Hello ";
    char strForEqual2[] = "Hello ";
    char strForEqual3[] = "World!";

    printf("%d\n\n", stringLength(str));


    stringConcatenate(strForConcatenate1, strForConcatenate2);


    printf("%d\n\n", areStringEquals(strForEqual1, strForEqual2));
    printf("%d", areStringEquals(strForEqual1, strForEqual3));

    return 0;
}

int stringLength(char str1[]){
    int stringlength = 0;
    for(int i = 0; str1[i] != '\0'; i++){
        stringlength++;
    }
    return stringlength;
}

void stringConcatenate(char str1[], char str2[]){
    char result[stringLength(str1)+stringLength(str2)+1];
    for(int i = 0; i < stringLength(str1); i++){
        result[i] = str1[i];
    }

    for(int i = stringLength(str1), index = 0; i < (stringLength(str1) + stringLength(str2)); i++, index++){
        result[i] = str2[index];
    }
    printf("%s\n\n", result);
    printf("%s\n\n", result + '\0');
}

bool areStringEquals(char str1[], char str2[]){

    if(stringLength(str1) != stringLength(str2)){
        return false;
    }

    for(int i = 0; i < stringLength(str1); i++){
        if(str1[i] != str2[i]){
            return false;
        }
    }
    return true;
}
