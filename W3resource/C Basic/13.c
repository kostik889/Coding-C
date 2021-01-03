#include <stdio.h>

int main(){
    printf("Write a C program that accepts three integers and find the maximum of three.\n");
    printf("Test Data :\n");
    printf("Input the first integer: ");
    int first;
    scanf("%d", &first);
    printf("Input the second integer: ");
    int second;
    scanf("%d", &second);
    printf("Input the third integer: ");
    int third;
    scanf("%d", &third);
    int max = first > second ? first : second;
    max = max < third ? third : max;
    printf("Maximum value of three integers: %d", max);

}