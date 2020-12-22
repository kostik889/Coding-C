#include<stdio.h>

int main(){
    printf("Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month.");

    printf("\nTest Data :\n");
    printf("Input the Employees ID(Max. 10 chars): ");

    char ID[10];
    fgets(ID, 10, stdin);

    printf("Input the working hrs: ");
    unsigned int working_hours=0;
    if(scanf("%u", &working_hours) ==1){
        printf("Salary amount/hr: ");
        unsigned int salary_amount_hr=0;
        if(scanf("%u", &salary_amount_hr) ==1){
            printf("---------------------------------------------");
            printf("\nEmployees ID = %s", ID);
            printf("Salary = U$ %u", working_hours*salary_amount_hr);
            printf("\n---------------------------------------------");
        }else
        {
            printf("Salary amount/hr have to be unsigned int!!!\n");
        }
        

    }else
    {
        printf("You have to use unsigned int!!!\n");
    }
    


}