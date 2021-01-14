//RETURN 1: FORMAT ERROR, NOT ABLE TO SCAN AN INTEGER PROPERLY
//RETURN 2: NUMBERS ARE NOT MULTIPLIED

#include <stdio.h>

int format_error (void){
    return printf("FORMAT ERROR! The value has to be an integer.");
}
int the_min_value(int a, int b){
    return a > b ? b : a;
}
int the_max_value(int a, int b){
    return a > b ? a : b;
}

int main(){
    printf("Write a C program that reads two integers and checks whether they are multiplied or not.\n");

    int arr_nums[2];
    const char *positions[2] = {"first", "second"};
    
    for(int i=0; i<2; i++){
        printf("Input the %s integer: ", positions[i]);
        if(scanf("%d", &arr_nums[i]) != 1){     //checking if one item is successfuly readed
            format_error();
            return 1;
        }
        //if we have both numbers, since we are comparing only two numbers and for cycle ends with i=1...
        if(i==1){
            if((the_max_value(arr_nums[0],arr_nums[1])%the_min_value(arr_nums[0],arr_nums[1])) == 0){
                printf("They are multiplied!");
                return 0;
            }
            else{
                printf("They are NOT multiplied!");
                return 2;
            }
        }
    }
}