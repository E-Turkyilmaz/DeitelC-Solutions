#include <stdio.h>

/*  A program that reads user's height in kilograms and weight in meters
 *  then calculates and displays user's body mass index.  */

int main() {

    //  define variables
    float weight, height;
    float bmi;

    //  prompt user to enter their weight
    printf("Enter your weight in kilograms:");

    //  read weight
    scanf("%f", &weight);

    //  prompt user to enter their height
    printf("Enter your height in meters:");

    //  read height
    scanf("%f", &height);

    //  calculate BMI based on given values
    bmi = weight/(height*height);

    //  prompt user the results and the info about BMI Values
    printf("Your body mass index(BMI) is %f.\n"
           "You can check your BMI status based on the information below.\n", bmi);
    printf("\nBMI VALUES\n");
    printf("Underweight:\tless then 18.5\n");
    printf("Normal:\tbetween 18.5 and 24.9\n");
    printf("Overweight:\tbetween 25 and 29.9\n");
    printf("Obese:\t30 or greater\n");

    return 0;
} /*  END of main  */
