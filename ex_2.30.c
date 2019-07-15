#include <stdio.h>

/*  A program that inputs one five-digit number, separates the number into its individual digits
 *  and prints the digits separated from one another by three spaces each.  */

int main() {

    //  define variables
    int num;

    //  prompt user to enter a five-digit number
    printf("Enter a five-digit number:");

    //  read the number
    scanf("%d", &num);

    //  control whether the number has five digits or not
    if((num/10000) > 9){
        printf("The number has more than five digits. Aborting...\n");
        return 0;
    }
    if((num/10000) < 10) {
        //  prompt the digits
        printf("%d   %d   %d   %d   %d\n",
               (num / 10000), (num % 10000) / 1000,
               (num % 1000) / 100, (num % 100) / 10, (num % 10));
    }

    return 0;
} /*  END of main  */

