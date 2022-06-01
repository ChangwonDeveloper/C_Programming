#include <stdio.h>
#include <stdlib.h>

/*
write a program that will print the content of a file in reverse order
use the fseek function to seek to the end of the file
use the ftell function to get the position of the file pointer
display as output the file in reverse order
*/
int main()
{
    FILE *fp = NULL;
    int cnt = 0;
    int i = 0;

    fp = fopen("challenge.txt", "r");

    if(fp == NULL){
        printf("Failed");
        return -1;
    }
    // move the file pointer to the end of the file
    fseek(fp, 0, SEEK_END);

    // get the position of the file pointer
    cnt = ftell(fp);
    while(i < cnt){
        i++;
        fseek(fp, -i, SEEK_END);
        printf("%c", fgetc(fp));
    }

    printf("\n");
    fclose(fp);
    fp = NULL;


    return 0;
}
