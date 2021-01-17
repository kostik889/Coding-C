//RETURN 1: FORMAT ERROR-NOT ABLE TO SCAN INTEGER PROPERLY
//RETURN 2: THE DIVISION WAS NOT POSSIBLE

#include <stdio.h>
#include <stdbool.h>

/*global variables*/
int arr_int[2];
const char *arr_int_position[2] = {"first", "second"};
/*-------------------------------------------------------------------------------------*/

//ERROR FUNCTIONS
int format_error(void){
    return printf("FORMAT ERROR! The value has to be an integer");
}
//FUNCTIONS
int introduction(void){
    return printf("Write a program that reads two numbers and divide the first number by second number. If the division not possible print \"Division not possible\"\n");
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
void sorting(int *a, int *b){
    int temp_big;
    temp_big = (*a) > (*b) ? (*a) : (*b);

    (*a) < temp_big ? ((*b)=(*a), (*a)=temp_big) : (true);
}
bool is_divisible(int a, int b){
    if(a%b == 0)
        return true;
    else
        return false;   
}
//MAIN FUNCTION
int main(void){
    introduction();

    if(getting_input() == false){
        return 1;
    }
    else{
        sorting(&arr_int[0],&arr_int[1]);
        if(is_divisible(arr_int[0],arr_int[1]) == true){
            printf("The division is: %d", arr_int[0]/arr_int[1]);
            return 0;
        }else{
            printf("Division not possible");
            return 2;            
        }
    }        
}