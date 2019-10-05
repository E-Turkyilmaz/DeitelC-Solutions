#include <stdio.h>

/*  A program that finds all pythagorean triples none larger than 500.  */

int main() {

    //  define variables
    int side1;
    int side2;
    int hypotenuse;

    //  prompt the listing format
    printf("Listed pythagorean triples will be printed within (side1, side2, hypotenuse) format:\n");

    //  create the loop to check all the combinations
    for(hypotenuse = 1; hypotenuse <= 500; hypotenuse++){
        for (side2 = 1; side2 <= 500 ; side2++) {
            for (side1 = 1; side1 <= 500 ; side1++) {
                if(hypotenuse * hypotenuse == (side1 * side1) + (side2 * side2))
                    printf("(%d, %d, %d)\n", side1, side2, hypotenuse);
            }
        }
    }

    return 0;
}

