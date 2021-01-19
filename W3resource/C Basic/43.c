//RETURN 1: THE INTEGER VALUE CAN NOT BE PROPERLY STORED
//RETURN 2: THE ENTERED VALUE IS NOT VALID...PROGRAM CAN NOT PRINT AT LEAST ONE LINE OR ONE CHARACTER

#include <stdio.h>
#include <stdbool.h>

/*global variables*/
int arr_int[2];
const char *arr_int_description[2] ={"number of lines", "number of characters in a line"};
/*---------------------------------------*/


//ERROR FUNCTIONS
int format_error (void){
    return printf("FORMAT ERROR! The value has to be an integer!");
}
//FUNCTIONS
int introduction (void){
    return printf("Write a C program that reads two integers p and q, print p number of lines in a sequence of 1 to q in a line.\n");
}
bool getting_input(void){
    for(int i=0; i<2; i++){
        printf("Input %s: ", arr_int_description[i]);
        if(scanf("%d", &arr_int[i]) !=1){
            format_error();
            return false;
        }
    }
    return true;
}
bool bigger_than_one (int number){
    return number < 1 ? false : true;
}
int rows_and_lines_numbers(void){
    int j=0;
    for(int i=1; i<=arr_int[0]; i++){
        ++j;
        for(j; true; j++){
            printf("%d ", j);
            if(j%arr_int[1]==0)
                break;
        }
        printf("\n");
    }
}
//MAIN FUNCTION
int main(void){
    introduction();

    if(getting_input() == false){
        format_error();
        return 1;
    }else if(bigger_than_one(arr_int[0]) == false || bigger_than_one(arr_int[1]) == false){
        printf("I can not print anything. Enter different values!");
        return 2;
    }else{
        rows_and_lines_numbers();
        return 0;
    }
}