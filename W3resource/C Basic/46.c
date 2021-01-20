#include <stdio.h>

//FUNCTIONS
int introduction (void){
    return printf("Write a C program to calculate the value of S where S = 1 + 3/2 + 5/4 + 7/8.\n");
}
float series_sum (void){
    float sum=0;
    float a=1,b=1;
    for(int i=0; i<4; i++){
        sum+= a/b;
        
        a +=2;
        b *=2;
    }
    return sum;
}
//MAIN FUNCTION
int main(void){
    introduction();

    printf("Value of series: %.2f", series_sum());
    return 0;
}