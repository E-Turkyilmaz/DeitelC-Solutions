#include <stdio.h>

/*  A program that calculates the squares and cubes of numbers from 0 to 10
 *  and prints them as a table.  */

int main(){

    //  define variables
    int number = 0;

    //  print table headers
    printf("number\tsquare\tcube\n");

    //  print numbers and their squares and cubes
    //  by incrementing number variable gradually
    //  0
    printf("%d\t%d\t%d\n", number, number*number, number*number*number);
    number = number + 1;

    //  1
    printf("%d\t%d\t%d\n", number, number*number, number*number*number);
    number = number + 1;

    //  2
    printf("%d\t%d\t%d\n", number, number*number, number*number*number);
    number = number + 1;

    //  3
    printf("%d\t%d\t%d\n", number, number*number, number*number*number);
    number = number + 1;

    //  4
    printf("%d\t%d\t%d\n", number, number*number, number*number*number);
    number = number + 1;

    //  5
    printf("%d\t%d\t%d\n", number, number*number, number*number*number);
    number = number + 1;

    //  6
    printf("%d\t%d\t%d\n", number, number*number, number*number*number);
    number = number + 1;

    //  7
    printf("%d\t%d\t%d\n", number, number*number, number*number*number);
    number = number + 1;

    //  8
    printf("%d\t%d\t%d\n", number, number*number, number*number*number);
    number = number + 1;

    //  9
    printf("%d\t%d\t%d\n", number, number*number, number*number*number);
    number = number + 1;

    //  10
    printf("%d\t%d\t%d\n", number, number*number, number*number*number);
    //  stop incrementing

    return 0;
} /*  END of main  */
