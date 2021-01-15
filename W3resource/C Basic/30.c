//RETURN 1: FORMAT ERROR - NUMBER IS NOT VALID, 

#include <stdio.h>


int format_error(void){
    return printf("FORMAT ERROR! The value is not valid. Try some other input. The integer is the best.. :)");
}

//power of two function - returns multiplication of the argument by two
int power_of_two(int a){
    return a*a;
}


int main(void){
    printf("Write a C program to find and print the square of each one of the even values from 1 to a specified value.\n");

    int number;

    printf("List of square of each one of the even values from 1 to a ");
    if(scanf("%d", &number) != 1){
        format_error();
        return 1;
    }
    for(int i=1; i<=number;i++){
        if(i%2 == 0)
            printf("%d ^ %d = %d\n", i, 2, power_of_two(i));
    }
    return 0;
}