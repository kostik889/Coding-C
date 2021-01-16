//RETURN 1: FORMAT ERROR - UNABLE TO SCAN VALUE PROPERLY
//RETURN 2: VALUES ARE THE SAME

#include <stdio.h>
#include <stdbool.h>

/*global variables*/
int arr_int[2];
const char *arr_int_position[2] = {"first", "second"};
/*--------------------------------------------------------------*/

//ERROR FUNCTIONS
int format_error(void){
    return printf("FORMAT ERROR! The value has to be an integer!");
}

//FUNCTIONS
int introduction(void){
    return printf("Write a C program to check whether two numbers in a pair is in ascending order or descending order.\n");
}
bool getting_input(void){
    for(int i=0; i<2; i++){
        printf("Input %s number of the pair: ", arr_int_position[i]);
        if(scanf("%d", &arr_int[i]) != 1){
            format_error();
            return false;
        }
    }
    return true;
}
bool first_was_bigger(void){
    return arr_int[0] > arr_int[1] ? true : false;
}
//MAIN FUNCTION
int main(void){
    introduction();

    printf("Input a pair of numbers (for example 10,2 : 2,10):\n");
    if(getting_input() == false){
        return 1;
    }else{
        if(arr_int[0] == arr_int[1]){
            printf("The values are the same!");
            return 2;
        }
        else if(first_was_bigger() == true){
            printf("The pair is in descending order!");
            return 0;
        }else{
            printf("The pair is in ascending order!");
            return 0;
        }
    }
}