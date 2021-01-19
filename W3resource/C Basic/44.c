//RETURN 1: TERMINATED AT ZERO INDEX - THERE ARE NO VALUES TO COUNT;

#include <stdio.h>
#include <stdbool.h>

/*global variables*/
int arr_int[100];
int i=0;

bool format_error_printed = false;
/*--------------------------------------------------*/

bool format_error(void){
    printf("FORMAT ERROR! The value is not in the right format. Program terminated. ");
    return format_error_printed = true;
}

int introduction (void){
    return printf("Write a C program to calculate the average marks of mathematics of some students. Input 0 (excluding to calculate the average) or negative value to terminate the input process.\n");
}
void getting_input(void){
    printf("Input Mathematics marks (0 to terminate): ");
    while(1){
        if(scanf("%d", &arr_int[i]) != 1){
            format_error();
            break;
        }
        if(arr_int[i]<=0 || i == 99)
            break;
        i++;
    }
}
bool terminated_at_zero_index (void){
    return i == 0 ? true : false;
}
float average_marks (void){
    int sum=0;
    for(int j=0; j <i; j++){
        sum+=arr_int[j];
    }
    return (float)sum/i;
}

int main(void){
    introduction();

    getting_input();
    if(terminated_at_zero_index() == true){
        if(format_error_printed == true)
            printf("\n");
        printf("There is nothing to count!");
        return 1;
    }else{
        if(format_error_printed == true)
            printf("\n");
        printf("Average marks in Mathematics: %.2f", average_marks());
        return 0;
    }
}