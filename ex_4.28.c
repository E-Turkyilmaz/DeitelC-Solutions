#include <stdio.h>

/*  A program to compute the weekly pay for several employees.  */

int main() {

    //  define variables
    int payCode;
    double hoursWorked;
    double salary;
    double weeklySales;
    int piecesProduced;
    double managerSalary;

    //  prompt user to enter pay code to be calculated
    printf("Enter the Pay-Code you want to be calculated:");
    //  read the input
    scanf("%d", &payCode);

    //  perform the calculations based on the pay code
    switch (payCode) {
        case 1:  //  manager
            managerSalary = 1000;
            printf("\nManager's weekly salary is %2.f$.\n", managerSalary);
            break;
        case 2:  //  hourly worker
            //  prompt user to enter hours worked
            printf("\nEnter the amount of hours worked this week: ");
            scanf("%lf", &hoursWorked);

            if(hoursWorked <= 40){
                salary = 8 * hoursWorked;
                printf("\nHourly worker's weekly salary is %2.f$.\n", salary);
            }
            else {
                salary = (8 * 40) + (8 * 1.5) * (hoursWorked - 40);
                printf("\nHourly worker's weekly salary is %2.f$.\n", salary);
            }
            break;
        case 3:  //  commission worker
            //  prompt user to enter weekly sales
            printf("\nEnter the amount of weekly sales: ");
            scanf("%lf", &weeklySales);

            salary = 250 + (weeklySales * 0.057);
            printf("\nCommission worker's weekly salary is %2.f$.\n", salary);
            break;
        case 4:  //  piece worker
            //  prompt user to enter weekly pieces produced
            printf("\nEnter the amount of pieces produced:");
            scanf("%d", &piecesProduced);

            salary = piecesProduced * 3.5;
            printf("\nPieceworker's weekly salary is %2.f$.\n", salary);
            break;
    }

    return 0;
}
