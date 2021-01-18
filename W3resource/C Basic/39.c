//RETURN 1: FORMAT ERROR - INTEGER VALUE CAN NOT BE PROPERLY SCANNED
//RETURN 2: IN THE INTERVAL THERE ARE NO NUMBERS DIVISIBLE BY 17

#include <stdio.h>
#include <stdbool.h>

/*global variables*/
int arr_int[2];
const char *arr_int_positon[2] = {"first", "second"};
int sum = 0;
/*-------------------------------------------------------------------*/

//ERROR FNCTIONS
int format_error(void){
    return printf("FORMAT ERROR! The value has to be an integer");
}
//FUNCTIONS
int introduction (void){
    return printf("Write a C program to calculate the sum of all number not divisible by 17 between two given integer numbers.\n");
}
bool getting_input(void){
    
    for(int i=0; i<2; i++){
        printf("Input the %s integer: ", arr_int_positon[i]);
        if(scanf("%d", &arr_int[i]) != 1){
            format_error();
            return false;
        }
    }
    return true;
}
void sorting(void){
    int temp_max = arr_int[0] > arr_int[1] ? arr_int[0] : arr_int[1];

    arr_int[1] < temp_max ? (arr_int[0] = arr_int[1], arr_int[1] = temp_max) : (true);
}
/*this function will loop through the interval and returns the sum of all numbers in the interval divisible by 17*/
bool interval_through_17 (void){
    for(int i = arr_int[0]; i<=arr_int[1]; i++){
        if(i%17 != 0){
            sum+=i;
        }
    }
    if(sum == 0)
        return false;
    else
        return true;
}
//MAIN FUNCTION
int main(void){
    introduction();

    printf("Test Data:\n");
    if(getting_input() == false){
        return 1;
    }else{
        sorting();      //sorting, the max value has to be the second element of the array so we could use it to run the for cycle...
        if(interval_through_17() == false){      //if there is not any number divisible by 17.
            printf("There is nothing to add. Enter different values.");
            return 2;
        }
        else{
            printf("Sum: %d", sum);
            return 0;
        }
    }
}