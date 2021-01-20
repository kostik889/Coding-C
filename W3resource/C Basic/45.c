#include <stdio.h>

//FUNCTIONS
int introduction(void){
    return printf("Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + ? + 1/50.\n");
}
float series_sum_printer(void){
    float sum=0;
    for(int i=1; i<=50; i++){
        sum+=(1/(float)i);
    }
    return printf("Value of S: %.2f", sum);
}
//MAIN FUNCTION
int main(void){
    introduction();

    series_sum_printer();
    return 0;
}