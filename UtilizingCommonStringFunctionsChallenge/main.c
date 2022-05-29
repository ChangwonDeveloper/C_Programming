#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
program that display a string in reverse order
    should read input from the keyboard
    need to use the strlen string function
program that sorts the strings of an array using a bubble sort
    need to use the strcmp and strcpy functions

*/

void reverseOrder(char str[]);


int main()
{
    char input[20];
    int inputNumber = 0;

    //printf("Enter some texts : ");
    //scanf("%s", input);
    //reverseOrder(input);

    printf("Input number of strings : ");
    scanf("%d", &inputNumber);
    printf("Input strings : ");
    char inputStrings[inputNumber][20][40];


    for(int i = 0; i < inputNumber; i++){
        scanf("%s", inputStrings[i]);
        printf("string %s is added\n", inputStrings[i]);
    }

    return 0;
}

void reverseOrder(char str[]){
    char result[20];
    for(int i = strlen(str), j = 0; i > 0; i--, j++){
            result[j] = str[i-1];
    }
    printf("The text is reversed to %s", result);
}
