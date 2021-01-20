//RETURN 1: FORMAT ERROR WAS PRINTED, DID NOT RECIEVED A NUMBER TO SEARCH FOR
//RETURN 2: RECIEVED NUMBER ZERO...THERE ARE NO DIVISORS OF THIS NUMBER

#include <stdio.h>
#include <stdbool.h>

/* global variables */
int number;
bool converted=false;
/*-------------------------------*/

//ERROR FUNCTIONS
int format_error(void){
    return printf("FORMAT ERROR! Value has to be an integer.\n");
}
//FUNCTIONS
int introduction(void){
    return printf("Write a C program that reads an integer and find all its divisor.\n");
}
bool getting_input(void){
    printf("Input an integer: ");
    if(scanf("%d", &number) != 1){
        format_error();
        return false;
    }else
        return true;
}
bool below_zero (int num){
    return num < 0 ? true : false;
}
void absolute_value(void){
    number *= -1;
    converted = true;
}
int finding_divisors(void){
    if(below_zero(number) == true)
        absolute_value();
    for(int i=1; i<=number; i++){
        if(number%i == 0)
            printf("%d\n", i);
    }
    if(converted == true)
        absolute_value();
}
//MAIN FUNCTION
int main(void){
    introduction();

    if(getting_input() == false){
        printf("\nDid not get a nubmer. Program now ends.");
        return 1;
    }else if(number == 0){
        printf("There are no divisors of this number");
        return 2;
    }
    else{
        printf("All the natural divisors of %d are:\n", number);
        finding_divisors();
        return 0;
    }
}