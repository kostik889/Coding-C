//RETURN 1: FORMAT ERROR, ENTERED VALUE HAS NOT BEEN PROPERLY SCANNED.
//RETURN 2: NO ODD VALUES HAS BEEN FOUND

#include <stdio.h>

int format_error(void){
    return printf("FORMAT ERROR! The value has to be either an integer or float.");
}
int end_of_the_program_print(float sum){
    return printf("Sum of all odd values %f", sum);
}

int main(void){
    printf("Write a C program that read 5 numbers and sum of all odd values between them.\n");

    float arr_nums[5];
    const char *arr_nums_position[5] = {"first", "second", "thrid", "fourth", "fifth"};

    float odd_values_sum=0;

    for(int i=0; i<5; i++){
        printf("Input the %s number: ", arr_nums_position[i]);
        if(scanf("%f", &arr_nums[i]) != 1){
            format_error();
            return 1;
        }
        if(((int)arr_nums[i]%2)!=0)
            odd_values_sum+=arr_nums[i];
    }
    if(odd_values_sum!=0){
        end_of_the_program_print(odd_values_sum);
        return 0;
    }else{
        printf("There is nothing to show here. Please try to input some odd values.");
        return 2;
    }
}