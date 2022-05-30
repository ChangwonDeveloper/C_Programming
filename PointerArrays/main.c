#include <stdio.h>
#include <stdlib.h>
// the effect of adding an integer value to a pointer
int main(void)
{
    char multiple[] = "a string";
    char *p = multiple;

    for(int i = 0; i <strlen(multiple); ++i)
        printf("multiple[%d] = %c *(p+%d) = %c &multiple[%d] = %p p+%d = %p\n", i, multiple[i], i, *(p+i), i, &multiple[i], i ,p+i);


    long multiple2[] = {15L, 25L, 35L, 45L}    ;
    long *pm = multiple2;

    for(int i = 0; i < sizeof(multiple2)/sizeof(multiple2[0]); i++)
        printf("address pm+%d (&multiple2[%d]) : %llu *(pm+%d) value: %d\n", i,i, (unsigned long long)(pm+i), i, *(pm+i));

    printf("\n          Type long occupies : %d bytes\n", (int)sizeof(long));


    return 0;

}
