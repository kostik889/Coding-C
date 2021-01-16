//RETURN 1: INTEGER WAS NOT SCANNED PROPERLY...FORMAT ERROR

#include <stdio.h>
#include <stdbool.h>

/*global variables*/
int arr_int[5];
int max_value, max_value_position;
/*-----------------------------------------------------------------------------*/

/*ERRORS*/
int format_error(void){
    return printf("FORMAT ERROR! The value has to be an integer!");
}

/*FUNCTIONS*/
int introduction(void){
    printf("Write a C program that accepts some integers from the user and find the highest value and the input position.\n");
    printf("Test Data :\n");
}
bool getting_input(void){
    for(int i=0; i<5; i++){
        if(scanf("%d", &arr_int[i]) != 1){
            format_error();
            return false;
        }
    }
    return true;
}
void max_values(void){      //searching in the array for the highest number and its position
    for(int i=0; i<5; i++){
        if(i==0)
            max_value=arr_int[i];
        if(max_value < arr_int[i])
            max_value_position=i+1;
        max_value = max_value > arr_int[i] ? max_value : arr_int[i];
    }
}
/*MAIN FUNCTION*/
int main(){
    introduction();

    printf("Input 5 integers:\n");
    if(getting_input() == false)
        return 1;
    else{
        max_values();
        printf("\nHighest value: %d\nPosition: %d", max_value, max_value_position);
    }
}