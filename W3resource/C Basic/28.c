//RETURN 1: FORMAT ERROR - VALUE HAS NOT BEEN SCANNED PROPERLY FROM THE USER
//RETURN 2: DID NOT RECIEVED ANY POSITIVE VALUE


#include <stdio.h>

int format_error(void){
    return printf("FORMAT ERROR! The value has to be either an integer of float value.");
}
int end_of_the_program_printf(float sum, int counter){
    return printf("Number of positive nubmers: %d\nAverage value of the said positive numbers: %.2f", counter, sum/counter);
}


int main(){
    printf("Write a C program that read 5 numbers and counts the number of positive numbers and print the average of all positive values.\n");

    float arr_nums[5];
    const char *arr_position[5] ={"first", "second", "third", "fourth", "fifth"};

    int positive_numbers_counter = 0;
    float positive_numbers_sum =0;

    for(int i=0; i<5; i++){
        printf("Input the %s number: ", arr_position[i]);
        if(scanf("%f", &arr_nums[i]) != 1){
            format_error();
            return 1;
        }
        if(arr_nums[i] > 0){
            positive_numbers_counter++;
            positive_numbers_sum += arr_nums[i];
        }
    }
    if(positive_numbers_counter != 0){
        end_of_the_program_printf(positive_numbers_sum, positive_numbers_counter);
        return 0;
    }else{
        printf("Nothing to show here. Please enter more positive values.");
        return 2;
    }
}