//SECONDS TO HOURS//
int hours(int seconds){
    return seconds/3600;
}

int minutes(hours, seconds){
    return (seconds - hours*3600)/60;
}


#include <stdio.h>

int main(){
    printf("Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.");
    printf("\nTest Data :");
    printf("\nInput seconds: ");
    int seconds;
    if(scanf("%d", &seconds) != 1){
        printf("The value is not right");
        return 1;
    }
    printf("There are: \n");
    printf("H:M:S - %d:%d:%d", hours(seconds), minutes(hours(seconds),seconds), seconds - (hours(seconds)*3600) - (minutes(hours(seconds),seconds)*60));
}