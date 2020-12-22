#include <stdio.h>

int main(){
    printf("Write a C program that accepts two integers from the user and calculate the product of the two integers.");

    int first=0, second=0;
    
    printf("\nTest Data :");
    printf("\nInput the first integer: ");
    if(scanf("%d", &first) == 1){
        printf("Input the second integer: ");
        if(scanf("%d", &second) == 1){
            printf("Sum of the above two integers: %d\n", first*second);
        }
        else
        {
            printf("Even the second number have to be an integer!!!\n");
            return 1;
        }
        
    }
        //**printf("EVERYTHING IS OK");**//
    else{
        printf("You have to input an integer!!!\n");
        return 1;
    }
        
}