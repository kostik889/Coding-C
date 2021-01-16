//RETURN 1: FORMAT ERROR - VALUES ARE NOT RIGHT, NO ABLE TO SCAN AN INTEGER VALUE

#include <stdio.h>
#include <stdbool.h>

/*global variables*/
int arr_nums[2];
int sum=0;
const char *arr_nums_position[2] = {"first","second"};
/*------------------------------------------------------------*/

/*ERROR FUNCTIONS*/
int format_error(void){
    return printf("FORMAT ERROR! The value has to be an integer");    
}

/*FUNCTIONS*/   
int introduction(void){
    return printf("Write a C program to print the numbers from the lowest to the highest (inclusive) and the sum of consecutive integers from a given pair of numbers.\n");
}
bool getting_input(void){
    for(int i=0; i<2; i++){
        printf("Input %s number of the pair: ", arr_nums_position[i]);
        if(scanf("%d", &arr_nums[i]) != 1){
            format_error();
            return false;
        }
    }
    return true;
}
void sorting_nums(void){
    int min_val = arr_nums[0] < arr_nums[1] ? arr_nums[0] : arr_nums[1]; //comparing the values, stroing them into temporary varibale so we do not loose them;
    int max_val = arr_nums[0] < arr_nums[1] ? arr_nums[1] : arr_nums[0];

    arr_nums[0] = min_val;
    arr_nums[1] = max_val;
}
int printing_odd_nums (void){
    for(int i=arr_nums[0]; i<=arr_nums[1]; i++){
        if(i%2 != 0){
            sum+=i;     //if the number is odd, add it to the sum
            printf("%d\n", i);
        }
    }
}
/*MAIN FUNCTION*/
int main(){
    introduction();

    printf("Input a pair of numbers (for example 10,2):\n");
    if(getting_input() == false){       //if the user input was not scanned properly ... return 1
        return 1;
    }else{
        sorting_nums();
        printf("List of odd nums:\n");
        printing_odd_nums();
        printf("The sum is %d", sum);

        return 0;     
    }
}