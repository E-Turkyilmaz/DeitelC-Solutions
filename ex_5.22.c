#include <stdio.h>

/*  A program that separates the digits of a number between 1 and 32767.  */

void SeparateDigits(int number){
    int a;                                                                      //  number to print
    int digitCheck;                                                             //  variable for number of digits
    for(digitCheck = 1; number / digitCheck != 0; digitCheck *= 10);            //  loop until we figure out the number of digits
    for(digitCheck= digitCheck / 10; digitCheck != 0; digitCheck /= 10){        //  loop for separating and printing each digit
        a = (number / digitCheck) % 10;
        printf("%d ", a);
    }
}

int main() {
    //  define variables
    int num;

    //  prompt user to enter a number between 1 and 32767, then read it
    printf("Enter a number between 1 and 32767: ");
    scanf("%d", &num);

    //  check whether the input is suitable or not
    if(num <= 32767 && num >= 1){
        SeparateDigits(num);
    } else{
        printf("\nThe number is too large!\n");
    }

    return 0;
}