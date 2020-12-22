#include <stdio.h>

int main(){
    printf("Write a C program that accepts two item?s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.\n");
    printf("Test Data :\n");

    float item1=0, weight1=0, item2=0, weight2=0;

    printf("Weight - Item1: ");
    if(scanf("%f", &weight1) == 1){
        printf("No. of item1: ");
        if(scanf("%f", &item1) == 1){
            printf("Weight - Item2: ");
            if(scanf("%f", &weight2) == 1){
                printf("No. of item2: ");
                if(scanf("%f", &item2) == 1){
                    printf("Average Value = %f\n", ((weight1*item1)+(weight2*item2))/(item1+item2));
                }else
                {
                    printf("The weight2 value have to be float!!!\n");
                }
            }else
            {
                printf("The item2 value have to be float!!!\n");
            }
              
        }
        else
        {
            printf("The item1 value have to be float!!!\n");
        }
        
    }else
    {
        printf("You have to enter float value!!!\n");
    }
    
}
