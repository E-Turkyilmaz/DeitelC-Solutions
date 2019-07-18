#include <stdio.h>

/*  An application that inputs the current world population and the annual population growth rate
 *  then displays the estimated world population after one, two, three, four and five years.  */

int main() {

    //  define variables
    unsigned long long int  population; //  world population is a large enough number
                                        //  to cause a stack overflow when defined as an integer
    int count = 1;
    float growthRate;

    //  prompt user to enter necessary values and read it
    printf("Enter the current world population:");
    scanf("%llu", &population);
    printf("Enter the annual population growth rate:");
    scanf("%f", &growthRate);
    printf("\n");

    //  calculate and display the estimated world population
    //  for the next five years.
    while(count <= 5){
        population = (unsigned long long int) (population + (population * (growthRate/100)));
        printf("Estimated world population for year %d:\t%llu\n", count, population);
        ++count;
    }


    return 0;
}   /*  END of main  */
