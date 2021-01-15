//RETURN 1: THE SCAN FUNCTION COULD NOT ACCEPT 1 VALUE PROPERLY FROM THE USER, PROBABLY NOT VALID VALUE WAS SCANNED


#include <stdio.h>
#include <stdbool.h>

/* intitializing the global variable*/
int number;


//FUNCTIONS
int format_error(void){
    return printf("FORMAT ERROR! The number has to be an integer.");
}
/* getting and validating input from user */
bool getting_input(void){
    if(scanf("%d", &number) != 1){
        format_error();
        return false;
    }else{
        return true;
    }
    
}
/* only small function to which prints numbers */
int printing_numbers(void){
    for(int i=1; i<=100; i++){
        if((i%number) == 3)
            printf("%d\n", i);
    }
}
//THE MAIN FUNTION
int main(void){
    printf("Write a C program to print all numbers between 1 to 100 which divided by a specified number and the remainder will be 3.\n");

    printf("Input an integer: ");
    if(getting_input() == false)
        return 1;
    else{
        printing_numbers();
        return 0;
    }
}