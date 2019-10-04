#include <stdio.h>

/*  A program that reads two values and calculates the sales for one day and prints them.  */

int main() {

    //  define variables
    int productNumber;
    int quantitySold;
    double price;
    double dailySales;

    //  prompt user to enter product number and quantity sold
    printf("Enter product number and quantity sold: ");

    //  read in the values
    scanf("%d%d", &productNumber, &quantitySold);

    //  assign product prices according to given product number
    switch (productNumber){
        case 1:
            price = 2.98;
            break;
        case 2:
            price = 4.50;
            break;
        case 3:
            price = 9.98;
            break;
        case 4:
            price = 4.49;
            break;
        case 5:
            price = 6.87;
            break;
        default:
            printf("\nNo such product found!");
            break;
    }

    //  calculate the sales for that product
    dailySales = price * quantitySold;

    //  print the results
    printf("\nDaily sales for product %d is %f $.", productNumber, dailySales);

    return 0;
}
