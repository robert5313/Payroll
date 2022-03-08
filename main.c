/*Payroll system
created by ROBERT KIMAIYO
ON MARCH 8TH 2022
MIT License
C89
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[100],kra[20];
    int hours,overtime,gross,tax,net;
    printf("Gitonga\'s Factory Payroll\n");
    //capture input
    printf("Enter Name:");
    gets(name);
    printf("Enter KRA pin:");
    gets(kra);
    printf("Hours worked: ");
    scanf("%d",&hours);
    //Computation
    if(hours > 40) {
        overtime = (hours - 40) * 1.5 * 1000;
        gross = overtime + (40 * 1000);
    }
    else {
        overtime = 0;
        gross = hours * 1000;
    }

    tax = 0.3 * gross;
    net = gross - tax;
    //output
    printf("Employee Name: %s\n",name);
    printf("Gross Income: %d\n",gross);
    printf("Tax Paid: %d\n",tax);
    printf("Net Income: %d\n",net);
    return 0;
}

