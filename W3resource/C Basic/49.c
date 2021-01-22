//RETURN 1 - NO VALUES TO PRINT - FORMAT ERROR WHEN READING THE INTEGER 

#include <stdio.h>
#include <stdbool.h>

/*global variables*/
int num;
/*------------------------------------*/

int format_error(void){
    return printf("FORMAT ERROR! The value has to be an integer\n");
}

int introduction(void){
    return printf("Write a C program to read and print the elements of an array of length 7, before print, put the triple of the previous position starting from the second position of the array\n");
}

bool getting_input(void){
    printf("Input the number of the array: ");
    if(scanf("%d", & num) != 1){
        format_error();
        return false;
    }
    else
        return true;
}
int array_printing(void){
    for(int i=0; i<7; i++){
        printf("n[%d] = %d\n", i, num);
        num*=3;
    }
}


int main(void){
    introduction();

    if(getting_input() == false){
        printf("There are no values to print");
        return 1;
    }else{
        array_printing();
        return 0;        
    }
}