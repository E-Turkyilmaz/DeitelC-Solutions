#include <stdio.h>

/*  A program that inputs 10 numbers and determines the two largest numbers.  */

int main() {

    //  define variables
    int num, temp;
    int count = 1, largest, secondLargest;

    //  get the first number
    printf("Enter number no %d:", count);
    scanf("%d", &num);
    largest = num;
    secondLargest = num;
    count++;

    //  repeatedly input numbers and compare them
    while(count <= 10){
        printf("Enter number no %d:", count);
        scanf("%d", &num);
        if(num > secondLargest){
            secondLargest = num;
            if(num > largest){
                temp = largest;
                largest = num;
                secondLargest = temp;
            }
        }
        count++;
    }

    //  print the largest and second largest number
    printf("\nThe largest number is %d."
           "\nThe second largest number is %d.", largest, secondLargest);

    return 0;
}   /*  END of main  */
