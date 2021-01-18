//RETURN 1: FORMAT ERROR - THE INTEGER CAN NOT BE PROPERLY SCANNED
//RETURN 2: THE ENTERED NUMBERS ARE THE SAME, THERE IS NO INTERVAL HERE
//RETURN 3: THE SUBTRACTION VALUE BETWEEN NUMBERS IS NOT ABLE TO COVER THE FUNCTIONALITY OF THIS PROGRAM => NO VALUES PRINTED

#include <stdio.h>
#include <stdbool.h>

/*global variables*/
int arr_int[2];
const char *arr_int_position[2] = {"first", "second"};
bool did_print = false;
/*-------------------------------------------------------------------*/

//ERROR FUNCTIONS
int format_error(void){
    return printf("FORMAT ERROR! The value has to be an integer.");
}
//FUNCTIONS
int introduction (void){
    return printf("Write a C program to find all numbers which are dividing by 7 and the remainder is equal to 2 or 3 between two given integer numbers\n");
}
bool getting_input(void){
    for(int i=0; i<2; i++){
        printf("Input the %s integer: ", arr_int_position[i]);
        if(scanf("%d", &arr_int[i]) != 1){
            format_error();
            return false;
        }
    }
    return true;
}
bool are_equal (void){
    if(arr_int[0] == arr_int[1])
        return true;
    else
        return false;
}
void sorting (void){
    int temp_max = arr_int[0] > arr_int[1] ? arr_int[0] : arr_int[1];

    arr_int[1] < temp_max ? (arr_int[0] = arr_int[1], arr_int[1] = temp_max) : (true);
}
/*this function loop through the interval given via the arr_int elements and print values which division remainder (from dividing by 7) is equal to 2 or 3*/
int numbers_by_7_finder(void){
    for(int i = arr_int[0]; i<arr_int[1]; i++){
        if(i%7 == 2 || i%7 == 3){
            printf("%d\n",i);
            did_print = true;
        }
    }
}
//MAIN FUNCTION
int main(void){
    introduction();

    printf("Test Data:\n");
    if(getting_input() == false){
        return 1;
    }else if(are_equal() == true){
        printf("There is no interval here.");
        return 2;
    }else{
        sorting();
        numbers_by_7_finder();
        if(did_print == false){
            printf("The entered numbers does not cover the function of this program. Enter different values.");
            return 3;
        }else{
            return 0;       //program ended successfully...
        }
    }
}