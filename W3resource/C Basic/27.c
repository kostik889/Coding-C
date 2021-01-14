//RETURN 1: FORMAT ERROR - UNABLE TO SCANF FLOAT VALUE PROPERLY
//RETURN 2: ONLY POSITIVE NUMBERS PRINTED
//RETURN 3: ONLY NEGATIVE NUMBERS PRINTED
//RETURN 4: NO POSTIIVE OR NEGATIVE NUMBERS

#include <stdio.h>
#include <stdbool.h>

int format_error(void){
    return printf("FORMAT ERROR! The number has to be a float value.");
}
int positive_numbers_print(int a){
    return printf("Number of positive numbers: %d", a);
}
int negative_numbers_print(int a){
    return printf("Number of negative numbers: %d" ,a);
}

int main(){
    printf("Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers.\n");

    float arr_nums[5];
    const char *arr_position[5] = {"first", "second", "third", "fourth", "fifth"};

    int positive_numbers =0, negative_numbers=0;

    for(int i=0; i<5; i++){
        printf("Input the %s number: ", arr_position[i]);
        if(scanf("%f", &arr_nums[i]) != 1){
            format_error();
            return 1;
        }
        if(arr_nums[i] > 0)
            positive_numbers++;
        if(arr_nums[i] < 0)
            negative_numbers++;
    }
    bool positive_printed = false;
    bool negative_printed = false;
    if(positive_numbers > 0 || negative_numbers > 0){ 
        if(positive_numbers > 0){
            positive_numbers_print(positive_numbers);
            positive_printed = true;
        }
        if(negative_numbers > 0){
            if(positive_printed == true)
                printf("\n");
            negative_numbers_print(negative_numbers);
            negative_printed = true;
        }
        if(positive_printed == true && negative_printed == true)
            return 0;
        if(positive_printed == false)
            return 3;
        if(negative_printed == false)
            return 2;
    }else{
        printf("No positive or negative nubmers");
        return 4;
    }
}