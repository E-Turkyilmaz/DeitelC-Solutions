#include <stdio.h>

/*  A program that reads an integer and determines and prints whether it is odd or even.  */

int main() {

    //  define variables
    int num;

    //  prompt user to enter an integer
    printf("Enter an integer:");

    //  read the value
    scanf("%d", &num);

    //  determine whether the number is odd or even
    if((num % 2) == 0){
        printf("This is an even number.\n");
    }
    if((num % 2) != 0){
        printf("This is an odd number.\n");
    }

    return 0;
}   /*  END of main  */
