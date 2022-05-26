#include <stdio.h>
#include <stdlib.h>
// Purpose : calculates your weekly pay
// ask user enter the number of hours worked in a week
// display as output the gross pay, the taxes, and the net pay
/*
Basic pay rate = 12
Overtime(in excess of 40h) =. 1.5*basic payrate
tax rate
15% of the first 300
20% of the next 150
25% of the rest
*/
int main()
{
    int basic_pay_rate = 12;
    int workingHours;
    int grossPayment;
    float grossTax;
    int overWorkingHours = 0;
    float net_pay = 0;
    int overWorkStandard = 40;

    printf("Enter your working hours in a week : ");
    scanf("%d", &workingHours);
    printf("%d\n", workingHours);

    // calculating payment
    if(workingHours > overWorkStandard){
            overWorkingHours = workingHours - overWorkStandard;
            workingHours -= overWorkingHours;
            grossPayment = workingHours * basic_pay_rate + overWorkingHours * basic_pay_rate * 1.5;
    }else {
            grossPayment = workingHours * basic_pay_rate;
    }

//    printf("%d\n", overWorkingHours);

    // calculating tax
    if(grossPayment > 450){
        grossTax = 300*0.15+150*0.2+(grossPayment-450)*0.25;
    }
    else if(grossPayment > 300){
        grossTax = 300*0.15 + (grossPayment-300)*0.2;
    }
    else{
        grossTax = grossPayment * 0.15;
    }

    // calculating net payment
    net_pay = grossPayment - grossTax;

    printf("grossPayment is %d\n", grossPayment);
    printf("grossTax is %.2f\n", grossTax);
    printf("netPayment is %.2f\n", net_pay);

    return 0;
}
