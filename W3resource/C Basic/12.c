#include<stdio.h>

int main(){
    printf("Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month.");

    printf("\nTest Data :\n");
    printf("Input the Employees ID(Max. 10 chars):");

    char ID[10];
    fgets(ID, 10, stdin);

    printf("Input the working hrs: ");
    unsigned int working_hours=0;
    if(scanf("%u", &working_hours) ==1){
        printf("this is good");
    }else
    {
        printf("this is bad\n");
    }
    


}