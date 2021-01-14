//RETURN 1: FORMAT ERROR, NOT ABLE TO SCAN FLOAT VALUES PROPERLY
//RETURN 2: THE SUM IS EQUAL TO ZERO, NO ODD VALUES SUM TO SHOW
#include <stdio.h>

int format_error (void){
    return printf("FORMAT ERROR! Unable to find float values");
}


int main(){
    printf(" Write a C program that read 5 numbers and sum of all odd values between them.\n");
    printf("Test Data :\n");

    float arr_nums[5];
    const char *position[5] = {"first", "second", "third", "fourth", "fifth"};
    float sum=0;

    for(int i=0; i<5; i++){
        printf("Input the %s number: ", position[i]);
        if(scanf("%f", &arr_nums[i]) != 1){
            format_error();
            return 1;
        }
        if((int)arr_nums[i]%2 != 0)
            sum+=arr_nums[i];
    }
    if(sum != 0){
        printf("The sum of all odd values: %.0f", sum);
        return 0;
    }else{
        printf("There is nothing to count, try input some odd values.");
        return 2;
    }

}