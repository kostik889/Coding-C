//RETURN 1: FORMAT ERROR, NOT SCANNED PROPERLY
//RETURN 2: IF THE NUMBER IS NOT IN THE INTERVAL


#include <stdio.h>

int format_error(void){
    return printf("The value has to be an integer!");
}
int not_in_interval(void){
    return printf("The number is not in the interval!");
}


int main(){
    printf("Write a C program that reads an integer and check the specified range where it belongs. Print an error message if the number is negative and greater than 80.\n");

    int a;
    printf("Input an integer: ");
    if(scanf("%d", &a) != 1){
        format_error();
        return 1;
    }
    if(a < 0 || a > 80){
        not_in_interval();
        return 2;
    }else{
        printf("Range [0,80]");
        return 0;
    }
}