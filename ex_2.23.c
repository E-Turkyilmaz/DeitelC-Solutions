#include <stdio.h>

/*  A program that reads in five integers and then determines and prints
 *  the largest and the smallest integers in the group. */

int main() {

    //  define variables
    int num1, num2, num3, num4, num5;
    int largest, smallest;
    int temp;

    //  prompt user to enter five integers
    printf("Enter five integers:");

    //  read the values
    scanf("%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5);

    //  assume num1 is smallest and num2 is largest
    smallest = num1;
    largest = num2;

    //  make comparisons to determine the largest and the smallest
    if(smallest > largest){
        temp = largest;
        largest = smallest;
        smallest = temp;
    }   //  NOTE: this section covers the situation for num1 and num2

    //  for num3
    if(num3 > largest){
        largest = num3;
    }
    if(num3 < smallest){
        smallest = num3;
    }

    // for num4
    if(num4 > largest){
        largest = num4;
    }
    if(num4 < smallest){
        smallest = num4;
    }

    // for num5
    if(num5 > largest){
        largest = num5;
    }
    if(num5 < smallest){
        smallest = num5;
    }

    //  prompt the results
    printf("Largest number is %d\nSmallest number is %d\n", largest, smallest);

    return 0;
}   /*  END of main  */

