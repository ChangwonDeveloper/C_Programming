#include <stdio.h>
#include <stdlib.h>

struct funds{
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(struct funds moolah){

    return(moolah.bankfund + moolah.savefund);
}

int main(void)
{
    struct funds stan = {
    "Garlic_Melon Bank",
    4032.27,
    "Lucky's Savings and Loan",
    8543.94
};

    printf("Stan has a total of $%.2f\n", sum(stan));
    return 0;
}
