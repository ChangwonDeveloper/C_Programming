#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[80] = "Hello how are you - my name is - chris";
    const char s[2] = "-";
    char *token;

    // get the first token
    token = strtok(str,s);

    // walk through other tokens
    while(token != NULL){
        printf( "  %s\n", token);
        token = strtok(NULL, s);;
    }

    char buf[100]; // input buffer
    int nLetters = 0; // number of letters in input
    int nDigits = 0; // number of digits in input
    int nPunct = 0; // number of punctuation characters

    printf("Eenter an interesting string of less than %d characters: \n", 100);
    scanf("%s",buf); // read a string into buffer

    int i = 0; // buffer index
    while(buf[i]){
        if(isalpha(buf[i]))
            ++nLetters; // increment letter count
        else if(isdigit(buf[i]))
            ++nDigits; // increment digit count
        else if(ispunct(buf[i]))
            ++nPunct; // increment punctuation count
        ++i;
    }
    printf("\n\nYour string contained %d letters, %d digits and %d puncutation characters. \n", nLetters, nDigits, nPunct);;

    return 0;
}
