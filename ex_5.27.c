#include <stdio.h>
#include <math.h>

/*  A program that finds and prints all the prime numbers between 1 and 10000.  */

int PrimeNumber(int number){
    int i;
    /*
     *   It is actually enough to loop until the sqrt of the number
     *   because of the fact that the number should be higher than or equal to
     *   some multiply of the sqrt value which means that the number should be at most
     *   sqrt(number)*something larger. Hence if the number is not divided by
     *   anything until the sqrt value of it, then it will not be divided by anything larger either
     *   so the number must be a prime one.
     */
    for(i = 2; i <= (int) sqrt(number); i++){
        if(number % i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    //  define variables
    int num = 1;
    int count = 0;

    //  loop 1 through 10000
    while (num <= 10000){
        //  if the number is prime
        if(PrimeNumber(num)){
            //  print the number in a 5 digit format
            printf("%5d ", num);
            //  increment the counter for each printed prime number
            ++count;
            //  print 10 numbers on each line
            if(count % 10 == 0){
                printf("\n");
            }
        }
        //  increase the number
        num++;
    }

    return 0;
}
