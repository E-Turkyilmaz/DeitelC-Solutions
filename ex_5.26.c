#include <stdio.h>

/*  A program that finds the perfect numbers between 1 and 1000.   */

void PerfectNum(int number){
    //  define variables
    int factor;
    int factorSum = 1; //  one is a factor for every number

    //  loop until factor is less then or equal to half of the number
    for(factor = 2; factor <= number/2; factor++){
        //  check if the loop index is a factor of the given number
        if((number % factor) == 0 ){
            //  if so increase the factorSum by factor value
            factorSum += factor;
        }
    }
    //  if factorSum is equal to the number itself
    if(factorSum == number){
        //  print the number
        printf("%d is a perfect number.\n", number);
    }
}

int main() {
    int number = 2;

    //  loop 1 through 1000 to find all the perfect numbers in that range
    while(number <= 1000){
        PerfectNum(number);
        number++;
    }

    return 0;
}
