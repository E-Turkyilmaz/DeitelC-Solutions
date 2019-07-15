#include <stdio.h>

int main() {
    // define variables
    int num1, num2;
    int sum, product, difference, quotient, remainder;

    //  prompt to user to enter 2 numbers
    printf("Enter two numbers:\n");
    //  read the numbers entered by the user
    scanf("%d%d", &num1, &num2);

    //  assign sum
    sum = num1 + num2;

    //  assign product
    product = num1 * num2;

    //  assign difference
    //  control to avoid negative values
    if(num1 >= num2){
        difference = num1 - num2;
    }
    else if(num1 <= num2){
        difference = num2 - num1;
    }

    //  assign quotient
    //  control to avoid value zero
    if(num1 >= num2){
        quotient = num1 / num2;
    }
    else if(num1 <= num2){
        quotient = num2 / num1;
    }
    /* NOTE: This will result as integer values no matter what the numbers are.
     * Ex: 5/2 will result as 2 not 2.5 */

    //  assign remainder
    remainder = num1 % num2;

    //  prompt results
    printf("\nSum: %d\nProduct: %d\nDifference: %d\nQuotient: %d\nRemainder: %d\n",
            sum, product, difference, quotient, remainder);

    return 0;
}