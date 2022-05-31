#include <stdio.h>
#include <stdlib.h>

// put the text file into the project file
int main()
{
    FILE *fp;
    int c;

    fp = fopen("file.txt", "r");

    if(fp == NULL){
        perror("Error in opening file");
        return(-1);
    }

    // read a single char
    while((c= fgetc(fp)) != EOF)
        printf("%c", c);

    fclose(fp);
    fp = NULL;

    system("pause");


}
