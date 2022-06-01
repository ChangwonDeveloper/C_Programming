#include <stdio.h>
#include <stdlib.h>

int main()
{
    // writing a character
    FILE *fp;
    int ch;

    fp = fopen("file.txt", "w+");

    for(ch = 33;  ch <= 100; ch++){
        fputc(ch, fp);
    }

    fclose(fp);


    // writing a string
    FILE *fp2;
    fp2 = fopen("file2.txt", "w+");

    fputs("Hello World!", fp2);
    fputs("This is Chris", fp2);

    fclose(fp2);

    // writing formmatted output
    FILE *fp3= NULL;
    fp3 = fopen("file3.txt", "w+");

    if(fp3 != NULL)
        fprintf(fp3, "%s %s %s %s %d", "Hello", "my", "name", "is", 555);

    fclose(fp3);
    return(0);

}
