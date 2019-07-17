#include <stdio.h>

/*  A program that takes miles driven and gallons used as inputs and calculates average miles per gallon.  */

int main() {

    //  define variables
    float gallonsUsed, milesDriven;
    float average, milesPerGallon;
    float totalGallons = 0, totalMiles = 0;

    //  prompt user to enter gallons used and read the value
    printf("Enter the gallons used (-1 to end):");
    scanf("%f", &gallonsUsed);

    // control if it is 0
     if(gallonsUsed == 0){
        printf("0 is an invalid value. Aborting...\n");
        return 0;
    }

    //  repeat until sentinel is entered
    while(gallonsUsed != -1.0) {
        printf("Enter the miles driven:");
        scanf("%f", &milesDriven);

        milesPerGallon = milesDriven / gallonsUsed;
        printf("The miles / gallon for this tank was %f\n", milesPerGallon);
        totalGallons += gallonsUsed;
        totalMiles += milesDriven;

        printf("\nEnter the gallons used (-1 to end):");
        scanf("%f", &gallonsUsed);
        if (gallonsUsed == 0) {
            printf("0 is an invalid value. Aborting...\n");
            return 0;
        }
    }

    //  calculate total average
    average = totalMiles / totalGallons;

    //  prompt the average miles / gallon
    printf("\nThe overall average miles/gallon was %f\n", average);

    return 0;
}   /*  END of main  */
