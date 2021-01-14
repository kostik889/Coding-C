//RETURN 1: UNABLE TO SCAN AN INTEGER VALUE PROPERLY

#include <stdio.h>

int format_error(void){
    return printf("FORMAT ERROR! The value has to be an integer");
}

int main(){
    printf("Write a C program that reads an integer between 1 and 12 and print the month of the year in English.\n");
    printf("Test Data :\n");
    printf("Input a number between 1 to 12 to get the month name: ");

    int number;
    if(scanf("%d", &number) != 1){
        format_error();
        return 1;
    }
    const char *months[12] = {"January","February","March","April","May","June","July","August","September","October","November","December"};

    for(int i= 0; i<12; i++){
        if(i+1 == number){
            printf("%s", months[i]);
            return 0;
        }
    }
}