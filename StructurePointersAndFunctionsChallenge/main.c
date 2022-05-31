#include <stdio.h>
#include <stdlib.h>
/*
write a program that creates a structure pointer and passes it to a function
    create a stcutrue named item with the following members
    itemName -pointer
    quantity - int
    price - float
    amount - float(stores quantity * price)

create a function named readitem that takes a structure pointer of type item as a parameter
    this function should read in (from the user) a product name, price, and quantity
    the contests read in should be stored in the passed in structure to the function

create a function named printitem that takes as a parameter a structure pointer of type item
    function prints the contents of the parameter
the main function should declare an item and a pointer to the item
    you will need to allocate memory for the itemName pointer
    the item pointer should be passed into both the read and print item function
*/
struct item{
    char *itemName;
    int quantity;
    float price;
    float amount;
};

struct item readitem(struct item *itemInfo);

void printItem(struct item *itemInfo){
    printf("The item's name is %s\n", itemInfo->itemName);
    printf("The item's quantity is %d\n", itemInfo->quantity);
    printf("The item's name is %.2f\n", itemInfo->price);
    printf("The item's name is %.2f\n", itemInfo->amount);
}

int main()
{
    struct item itemInfo = {"Book", 5, 43.5, 43.5*5};
    struct item *pItem;

    pItem = &itemInfo;

    readitem(&itemInfo);
    printItem(&itemInfo);


    return 0;
}

struct item readitem(struct item *itemInfo){
    struct item my_item = {"", 0, 0.0, 0.0};

    my_item.itemName = itemInfo->itemName;
    my_item.quantity = itemInfo->quantity;
    my_item.price = itemInfo->price;
    my_item.amount =  itemInfo->amount;

    return my_item;

};

