#include <stdio.h>
#include <stdlib.h>

// Purpose : converts the number of minutes to days and years
// ask the user to enter the number minutes via the terminal
// should display as output the minutes and then its equivalent in years and days
// minutes(int)
// minutes in year
// years
// days
int main()
{
    int minute = 0;
    double years = 0;
    double days = 0;
    double minutesInYear = 0;

    printf("Enter Minutes : ");

    // get input from user
    scanf("%d", &minute);

    minutesInYear = (60*24*365);

    years = minute / minutesInYear;

    // since minute is int, if i put 24 and 60, it does not result in double.
    days =  minute / (24.0*60.0);
    printf("Day is : %lf", days);
    printf("Year is : %lf", years);

    return 0;
}
