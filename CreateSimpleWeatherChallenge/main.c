#include <stdio.h>
#include <stdlib.h>
/*
create uses a two-dimensional array in a weather program
find the total rainfall for each year, the average yearly rainfall, and the average rainfall for each month
input will be a 2D array with hard-coded values for rainfall amounts for the past 5 years
    the array should have 5 rows and 12 columns
    rainfall amount can be floating point numbers

*/
int main()
{
    float rainfallByYear[5][12] = {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };
    float rainfallAverageByYear[5];
    float totalRainFall = 0;
    float totalRainfallByMonth[12] = {0,0,0,0,0,0,0,0,0,0,0,0};
    printf("%.2f\n\n\n", rainfallByYear[0][5]);
    printf("%.2f\n\n\n", totalRainfallByMonth[5]);

    // for loop to get total rainfall
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 12; j++){
                totalRainFall += rainfallByYear[i][j];
                rainfallAverageByYear[i] += rainfallByYear[i][j];
                totalRainfallByMonth[j] += rainfallByYear[i][j];
                printf("%.2f\n",totalRainfallByMonth[j]);
        }
        printf("\n\n New Year start\n");
    }

    // for loop to print out the result
    printf("Year            RainFall\n");
    for(int i = 0; i < 5; i++){
            printf("%.2f\n", rainfallAverageByYear[i]);
    }

    printf("The yearly average is %.2f\n", totalRainFall / 5);

    printf("Monthly Averages: \n");

    for(int i = 0; i < 12; i++){
        printf("%.2f   ", totalRainfallByMonth[i] / 5);
    }

    return 0;
}
