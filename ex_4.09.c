#include <stdio.h>

/*  A program that sums a sequence of integers.  */

int main() {

    //  define variables
    int count;
    int seqSize;
    int number;
    int sum;

    //  input the count then the numbers
    scanf("%d", &seqSize);

    //  loop through the sequence and calculate the sum
    for(count = 1, sum = 0; count <= seqSize; count++){
        scanf("%d", &number);
        sum += number;
    }

    //  print the result
    printf("\nSum is %d.", sum);

    return 0;
}

