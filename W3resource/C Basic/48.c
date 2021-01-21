//RETURN 1 - NOTHING TO PRINT, THE VALUE ON FIRST INPUT WAS NOT VALID
//RERTURN 2 - DID NOT FILLED THE WHOLE ARRAY WITH NUMBERS, CAN NOT RECIEVED INTEGER ON AT INDEX WHICH IS STORED IN UNTIL GLOBAL VARIABLE

#include <stdio.h>
#include <stdbool.h>

/*global variables*/
int arr_int[7];
const char *arr_int_position[7] = {"first", "second", "third", "fourth", "fifth", "sixth", "seventh"};
int until;
bool error_printed = false;
/*--------------------------------------------------------------------------------------------------------*/

//ERROR FUNCTIONS
void format_error(void){
    printf("FORMAT ERROR! The value has to be an integer.");
    error_printed=true;
}
//FUNCTIONS
int introduction(void){
    return printf("Write a C program to read and print the elements of an array of length 7, before print replace every negative number, zero with 100\n");
}
bool getting_input(void){
    int i;
    printf("Input members of the array:\n");
    for(i=0; i<7; i++){
        printf("%s...", arr_int_position[i]);
        if(scanf("%d", &arr_int[i]) != 1){
            format_error();
            until=i;
            return false;
        }
    }
    until = i;
    return true;
}
bool equal_to_zero_or_below (int num){
    return num <= 0 ? true : false;
}
int arr_int_printer(void){
    if(error_printed == true)
        printf("\n");
    printf("Array values are:\n");
    for(int i=0; i<until; i++){
        if(equal_to_zero_or_below(arr_int[i]) == true){
            arr_int[i] = 100;
        }
        printf("n[%d] = %d\n", i,arr_int[i]);
    }
}
//MAIN FUNCTION
int main(void){
    introduction();

    if(getting_input() == false && until == 0)
        return 1;
    arr_int_printer();

    return error_printed == false ? (0) : (2);
}