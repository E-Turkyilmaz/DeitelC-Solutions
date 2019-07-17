#include <stdio.h>

/*  A program that reads a five-digit integer and determines whether it is a palindrome or not.  */

int main() {

    //  define variables
    int num, count = 10000;
    int digit1, digit2;

    //  prompt user to enter a five-digit number and read it
    printf("Enter a five-digit number:");
    scanf("%d", &num);

    //  control if it has more than five digits
    if((num / count) > 9){
        printf("The number has more than five digits! Aborting the program...\n");
        return 0;
    }
    else if((num / count) < 1){
        printf("The number has less then five digits! Aborting the program...\n");
        return 0;
    }

    //  separate the digits and determine if palindrome
    while(count >= 1) {
        digit1 = (num / count);
        digit2 = (num % 10);
        if (digit1 == digit2) {
            num = (num - (digit1 * count) - digit2)/10;
            count /= 100;
        } else {
            printf("... The number is NOT a palindrome. ...\n");
            return 0;
        }
    }

    printf("*** The number IS a palindrome. ***\n");

    return 0;
}   /*  END of main  */
