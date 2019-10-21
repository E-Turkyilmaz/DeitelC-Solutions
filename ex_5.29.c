#include <stdio.h>

/*  A program that finds the greatest common divisor of two integers.  */

int gcd(int a, int b){
    int smallest = a;
    int largest = b;
    int factor;
    int gcd = 1;

    //  find the largest and smallest numbers
    if(b < a){
        smallest = b;
        largest = a;
    }
    //  if the larger number is a multiple of the smaller
    if(largest % smallest == 0){
        //  smaller number is equal to the gcd of these numbers
        gcd = smallest;
    }
    else{
        for(factor = 2; factor < smallest/2; factor++){
            //  search for values that can divide both numbers
            if((largest % factor == 0) && (smallest % factor == 0)){
                gcd = factor;
            }
        }
    }
    return gcd;
}

int main() {
    //  define variables
    int num1, num2;

    //  prompt user to enter two integers and read the input
    printf("Enter two integers to find their GCD: ");
    scanf("%d%d", &num1, &num2);

    //  call the function and print GCD
    printf("\nGreatest Common Divisor of %d & %d is %d.\n", num1, num2, gcd(num1, num2));

    return 0;
}
