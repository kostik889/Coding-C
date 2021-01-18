//RETURN 1: THE INTEGER VALUE CAN NOT BE PROPERLY STORED
//RETURN 2: THE ENTERED VALUE IS NOT VALID...PROGRAM CAN NOT PRINT AT LEAST ONE LINE

#include <stdio.h>
#include <stdbool.h>

/*global variables*/
int n;
/*---------------------------------------*/


//ERROR FUNCTIONS
int format_error (void){
    return printf("FORMAT ERROR! The value has to be an integer!");
}
//FUNCTIONS
int introduction (void){
    return printf("Write a C program to print a number, it?s square and cube in a line, starting from 1 and print n lines. Accept number of lines (n, integer) from the user.\n");
}
bool getting_input(void){
    if(scanf("%d", &n) !=1){
        format_error();
        return false;
    }else
        return true;
}
bool bigger_than_one (void){
    return n < 1 ? false : true;
}
int power (int number, int power){
    switch(power){
        case 1:
            return number;
            break;
        case 2:
            return number*number;
            break;
        case 3:
            return number*number*number;
            break;
    }
}
int three_in_a_row_square_and_cube(void){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=3; j++){
            printf("%d ", power(i,j));
        }
        printf("\n");
    }
}
//MAIN FUNCTION
int main(void){
    introduction();

    printf("Input number of lines: ");
    if(getting_input() == false){
        format_error();
        return 1;
    }else if(bigger_than_one() == false){
        printf("I can not print anything. Enter different value!");
        return 2;
    }else{
        three_in_a_row_square_and_cube();
        return 0;
    }
}