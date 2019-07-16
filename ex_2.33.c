#include <stdio.h>

/*  A program that reads some information and displays the user's cost per day of driving to work.  */

int main() {

    //  define variables
    float kmPerDay, costOfGasoline, kmPerLitre, parkingFees, tolls;
    float totalCost;

    //  prompt user to enter necessary information
    printf("Please Enter The Following Values\n");
    printf("\nTotal kilometers driven per day:");
    //  read the value
    scanf("%f", &kmPerDay);

    printf("\nCost per litre of gasoline:");
    scanf("%f", &costOfGasoline);

    printf("\nAverage kilometers per litre:");
    scanf("%f", &kmPerLitre);

    printf("\nParking fees per day:");
    scanf("%f", &parkingFees);

    printf("\nTolls per day:");
    scanf("%f", &tolls);

    //  calculate the total cost per day
    totalCost = ((kmPerDay/kmPerLitre)*costOfGasoline) + parkingFees + tolls;

    //  prompt user the total cost per day
    printf("Your total cost per day of driving to work is %f TL.\n", totalCost);

    return 0;
}   /*  END of main  */
