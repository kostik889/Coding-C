#include <stdio.h>

int main(){
    printf("Write a C program that prints all even numbers between 1 and 50 (inclusive).\n");
    printf("Test Data :\n");
    printf("Even numbers between 1 to 50 (inclusive): \n");
    for(int i=2; i<=50; i+=2){
        printf("%d ", i);
    }
    return 0;
}