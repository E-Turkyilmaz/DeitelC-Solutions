#include <stdio.h>

/*  A program that inputs three different integers from the keyboard,
 *  then prints the sum, the average, the product, the smallest and the largest of these numbers. */

int main() {

    int num1, num2, num3;
    int sum, average, product;
    int smallest, largest;

    //  prompt that asks for three different integers
    printf("Input three different integers: ");

    //  read the inputs
    scanf("%d%d%d", &num1, &num2, &num3);

    //  assign sum
    sum = num1 + num2 + num3;

    //  assign average
    /*  NOTE: the average variable is an integer value,
     *  so do not expect float returns.   */
    average = sum / 3;  // obviously you can as well use (num1 + num2 + num3) instead of sum

    //  assign product
    product = num1 * num2 * num2;

    //  determine tne largest number of the three
    largest = num1; //  assume num1 is the largest

    if(num2 > largest){
        largest = num2;
    }
    if(num3 > largest){
        largest = num3;
    }

    //  determine the smallest number of the three
    smallest = num1; //  assume num1 is the smallest

    if(num2 < smallest){
        smallest = num2;
    }
    if(num3 < smallest){
        smallest = num3;
    }

    //  prompt the end results
    printf("\nSum is %d\nAverage is %d\nProduct is %d\nSmallest is %d\nLargest is %d\n",
            sum, average, product, smallest, largest);

    return 0;
} /*    END of main     */