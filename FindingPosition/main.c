#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    int len;

    fp = fopen("file.txt", "r");
    if (fp == NULL){
        perror("Error opening file");
        return(-1);
    }
    fseek(fp, 0, SEEK_END);

    len = ftell(fp);
    fclose(fp);

    printf("Total size of file.txt = %d bytes\n", len);

    FILE *fp2;
    fpos_t position;

    fp2 = fopen("file.txt", "w+");
    fgetpos(fp2, &position);
    fputs("Hello, World!", fp2);

    fclose(fp2);


    FILE *fp3;

    fp3 = fopen("file2.txt", "w+");
    fputs("This is Chris", fp3);

    fseek(fp3, 7, SEEK_SET);
    fputs(" Hello how are you", fp3);
    fclose(fp3);

    return (0);

    FILE *fp4;
    fpos_t position2;

    fp4 = fopen("file3.txt", "w+");
    fsetpos(fp4, &position);
    fputs("Hi", fp4);

    fputs(" This is going to override previous content", fp4);
    fclose(fp4);

    return (0);
}
