#include <stdio.h>
#include <stdlib.h>

int main()
{
        char str1[] = "To be or not to be";
        char str2[] = ", that is the question";
        unsigned int count = 0; // stores the string length

        while(str1[count] != '\0') // increment count till we reach the terminating character
            ++count;

        printf("The length of the string \"%s\" is %d characters.\n", str1, count);

        count = 0; // resent count for next string
        while(str2[count] != '\0') // count characters in second string
            ++count;

    printf("the length of the string\" %s\"is %d characters. \n", str2, count);

    printf("The character \0 is used to terminate a string.");
    return 0;
}
