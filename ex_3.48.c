#include <stdio.h>

/*  A program that reads the birth date of the user and the current day to determine the user's
 *  maximum heart rate and target hear rate range.  */

int main() {

    //  define variables
    int bDD, bMM, bYY;
    int cDD, cMM, cYY;
    int age;
    int maxHR, lowHR,highHR;

    //  prompt user to enter their birth date then the current date
    printf("Enter your birth date (dd mm yyyy):");
    scanf("%d%d%d", &bDD, &bMM, &bYY);
    printf("Enter current date (dd mm yyyy):");
    scanf("%d%d%d", &cDD, &cMM, &cYY);

    //  calculate age
    age = cYY - bYY;

    //  control if birth day passed more than 9 months
    //  if true increment age
    if((cMM - bMM) > 9) {
        age++;
    }

    maxHR = 220 - age;
    lowHR = (int) (maxHR * 0.5);
    highHR = (int) (maxHR * 0.85);

    //  display the results
    printf("\nYou are %d years old.\n", age);
    printf("Your maximum heart rate should be %d BPM.\n", maxHR);
    printf("Your target heart rate range should be between %d - %d BPM.\n", lowHR, highHR);

    return 0;
}   /*  END of main  */
