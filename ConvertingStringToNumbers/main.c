#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    double value = 0;
    char str[] = "3.5 2.5 1.26"; // string to be converted
    char *pstr = str; // pointer to the string to be converted
    char *ptr = NULL; // Pointer to character position after conversion


    while(1)
    {

        value = strtod(pstr, &ptr); // convert starting at pstr
        if(pstr == ptr) // pstr stored if no conversion
            break; // so we are done
        else{
            printf(" %f", value); // output the resultant value
            pstr = ptr; // store start for next conversion
        }
    }
    return 0;
}
