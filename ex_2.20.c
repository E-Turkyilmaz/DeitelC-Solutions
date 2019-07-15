#include <stdio.h>

/*  A program that reads the radius of a circle and prints the circle's diameter,
 *  circumference and area. */

int main() {

    //  define variables
    int radius;
    float pi = 3.14159;

    //  prompt user to enter the radius
    printf("Enter a value for radius:");

    //  read the value for radius
    scanf("%d", &radius);

    //  prompt user the results
    printf("\nDiameter is %d\nCircumference is %f\nArea is %f\n",
           2 * radius, 2*(radius*pi), 2*(pi*(radius*radius)));

    return 0;
}   /*  END of main  */