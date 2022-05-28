#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char myString[] = "My Name is Chris"; // create an array size with the number of string +1 (\0)
    char temp[50];

    strncpy(temp, myString, sizeof(temp)-1);
    printf("The length is : %d\n\n", strlen(myString));
    printf("The length is : %s", temp);

    char myString2[] = "my string";
    char input[80];
    printf("Enter a string to be concatenated: ");
    scanf("%s", input);
    printf("\nThe string %s concatenated with %s is ::::::: \n\n\n\n", myString2,input);
    printf("%s\n\n\n", strcat(input, myString2));


    char src[50], dest[50];
    strcpy(src, "This is source");
    strcpy(dest, "This is destination");

    strncat(dest, src, 15);

    printf("Final destination string : |%s|", dest);
    return 0;
}
