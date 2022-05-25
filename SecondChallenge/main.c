#include <stdlib.h>

// Purpose : get width and height of rectangle and get perimeter and and area of it
int main()
{
    // declaring variables
    double width;
    double height;
    double perimeter = 0;
    double area = 0;

    // getting information from user
    printf("Enter width :  ");
    scanf("%lf", &width);
    printf("Enter height : ");
    scanf("%lf", &height);

    // calculating perimeter and area based on the data
    perimeter = width*2 + height*2;
    area = width*height;

    // displaying input
    printf("width is : %lf\n", width);
    printf("height is : %lf\n", height);
    printf("perimeter is : %lf\n", perimeter);
    printf("area is : %lf\n", area);

    return 0;
}
