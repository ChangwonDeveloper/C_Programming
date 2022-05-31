#include <stdio.h>
#include <stdlib.h>
/*
write a program that declares a structure and prints out its content
    create an employee structure
        name(character array)
        hireDate(int)
        salary(float)
declare and initialize an instance of an employee type
read in a second employee from the console and store it in a structure of type employee
print out the contents of each employee
*/

struct employee{
    char name[20];
    int hireDate;
    float salary;
};

int main()
{
    struct employee employeeInfo ={"Chris", 19980901, 5003.2};

    printf("%s\n",employeeInfo.name);
    printf("%d\n",employeeInfo.hireDate);
    printf("%.2f\n",employeeInfo.salary);
    printf("\n Enter employee information : \n");
    printf("\n Enter employee name : \n");
    scanf("%s", employeeInfo.name);

    printf("\n Enter employee hireDate : \n");
    scanf("%d", &employeeInfo.hireDate);
    printf("\n Enter employee salary : \n");
    scanf("%f", &employeeInfo.salary);

    printf("%s\n",employeeInfo.name);
    printf("%d\n",employeeInfo.hireDate);
    printf("%.2f\n",employeeInfo.salary);


    return 0;
}
