#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("strcmp (\"A\", \"A\") is " );
    printf("%d\n", strcmp("A", "A"));

    printf("strcmp (\"A\", \"B\") is " );
    printf("%d\n", strcmp("A", "B"));

    printf("strcmp (\"B\", \"A\") is " );
    printf("%d\n", strcmp("B", "A"));

    printf("strcmp (\"C\", \"A\") is " );
    printf("%d\n", strcmp("C", "A"));

    printf("strcmp (\"Z\", \"a\") is " );
    printf("%d\n", strcmp("Z", "a"));

    printf("strcmp (\"Apple\", \"Apples\") is " );
    printf("%d\n", strcmp("Apple", "Apples"));
    return 0;
}
