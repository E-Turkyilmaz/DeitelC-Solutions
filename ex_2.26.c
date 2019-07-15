#include <stdio.h>

/*  A program that reads two integers in and determines
 *  and prints if the first is a multiple of the second.  */

int main() {

    //  define variables
    int num1, num2;

    //  prompt user to enter two integers
    printf("Enter two integers:");

    //  read two integers
    scanf("%d%d", &num1, &num2);

    //  determine if the first is a multiple of the second or not
    if((num1 % num2) == 0){
        printf("First number is a multiple of the second number.\n");
    }

    if((num1 % num2) != 0){
        printf("First number is not a multiple of the second number.\n");
    }

    return 0;
} /*  END of main  */
