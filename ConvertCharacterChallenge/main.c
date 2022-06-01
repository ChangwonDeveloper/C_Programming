#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
write a program that convert all characters of a file to uppercase and write the results out to a temporary file.
then rename the temporary file to the original filename and remove the temporary filename

use the fgetc and fputc functions
use the rename and remove functions
use the islower function
    can convert to upper case by subtracting 32 from it
display the contents of the original file to standard output
    in uppercase
*/
int main()
{
    FILE *fp = NULL;
    FILE *temp = NULL;
    char ch;

    fp = fopen("challenge.txt", "r");
    temp = fopen("temp.txt", "w");

    if(fp ==NULL || temp == NULL){
        printf("Failed");
        return -1;
    }

    // how while loop iterate?
    while((ch=fgetc(fp))!= EOF)
    {
        if(islower(ch)){
            ch -= 32;
            printf("An character has been changed to upper case\n");
        }
            fputc(ch, temp);
    }

    fclose(fp);
    fclose(temp);

    if(rename("temp.txt","challenge.txt") == 0)
        printf("The file name was been changed successfully\n");

    remove("temp.txt");

    fp = fopen("challenge.txt", "r");

    if(fp == NULL){
        printf("Failed");
        return -1;
    }


    while((ch=fgetc(fp))!= EOF)
        printf("%c", ch);

    fclose(fp);

    return 0;
}
