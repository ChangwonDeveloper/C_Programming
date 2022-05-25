#include <stdio.h>
#include <stdlib.h>
// Purpose : create enum Company and print out some company value
int main()
{
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

    enum Company companyGoogle = GOOGLE;
    enum Company companyXerox = XEROX;
    enum Company companyEbay = EBAY;
    printf("%i\n", companyXerox);
    printf("%i\n", companyGoogle);
    printf("%i\n", companyEbay);

    return 0;
}
