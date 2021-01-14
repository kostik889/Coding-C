//RETURN 1: THE SCANNED VALUE WAS NOT A FLOAT NUMBER
//RETURN 2: DISCRIMINANT BELOW ZERO...

#include <stdio.h>
#include <math.h>           //math library for sqrt function
//format error if scanned value is not a float
int format_error(void){
    return printf("FORMAT ERROR!, value has to be float!");
}
int discriminant_below_zero(void){
    return printf("DISCRIMINANT IS BELOW ZERO...only with imaginary nubmers!\nNot possible to find the roots\n");
}

float power_of_two (float a){
    return a*a;
}

float discriminant (float a, float b, float c){
    return power_of_two(b) - 4*a*c;
}
float first_root(float a, float b, float c){
    return ((-b)+sqrt(discriminant(a,b,c)))/(2*a);
}
float second_root(float a, float b, float c){
    return ((-b)-sqrt(discriminant(a,b,c)))/(2*a);
}

int main(){
    printf("Write a C program to print the roots of Bhaskara?s formula from the given three floating numbers. Display a message if it is not possible to find the roots.\n");

    float arr_nums[3];  //a, b, c
    char arr_chars[3] = {'a', 'b', 'c'};
    
    //fisrt of all, scan the values and check for data validity...
    for(int i=0; i<3; i++){
        printf("Input the %c float value: ", arr_chars[i]);     
        if(scanf("%f", &arr_nums[i]) == 1){     //checking for validity
        }else{
            format_error();
            return 1;
        }
    }
    discriminant(arr_nums[0], arr_nums[1], arr_nums[2]);
    //printf("discriminant: %f", discriminant(arr_nums[0], arr_nums[1], arr_nums[2]));

    if(discriminant(arr_nums[0], arr_nums[1], arr_nums[2]) <0){
        discriminant_below_zero();
        return 2;
    }else{
        printf("First root is: %f", first_root(arr_nums[0], arr_nums[1], arr_nums[2]));
        printf("\nSecond root is: %f", second_root(arr_nums[0], arr_nums[1], arr_nums[2]));
        return 0;
    }       
}