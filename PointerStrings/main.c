#include <stdio.h>
#include <stdlib.h>

void copyStringArray(char to[], char from[]){

    int i;
    for(int i = 0; from[i] != '\0'; i++){
        to[i]=from[i];
    }
    to[i] = '\0';
}

void copyStringPointer(char *to, char *from){

    for(; *from != '\0'; ++from, to++){
        *to=*from;
    }
    *to = '\0';
}
void copyStringPointer2(char *to, char *from){

    while(*from){ // the null charactter is equal to the value 0, so jump out then
        *to++ =*from++; //
    }
    *to = '\0';
}

int main()
{
    char string1[] = "a string";
    char string2[50];

    copyStringPointer2(string2, string1);
    printf("%s\n", string2);


    return 0;
}
