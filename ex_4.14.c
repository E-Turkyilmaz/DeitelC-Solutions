#include <stdio.h>

/*  A program that evaluates the factorials of the integers from 1 to n and prints them in tabular format.  */

int main() {

    //  define variables
    int n;
    int i;
    int factorial = 1;

    //  prompt user to enter an integer value
    printf("Enter a number between 1 and 10: ");    //  to compute greater values
                                                    //  factorial has to be defined
                                                    //  as an unsigned long or even unsigned long long
                                                    //  otherwise all you would get as a result
                                                    //  will be a mod of 2^64 fi you are on a 64 bit system

    //  input the value of n
    scanf("%d", &n);

    //  print the table headers
    printf("%9s%17s\n", "Number(n)", "Factorial(n!)");

    //  calculate factorial values and print them
    for(i = 1; i <= n; i++){
        factorial = factorial * i;
        printf("%9d%17d\n", i, factorial);
    }

    return 0;
}
