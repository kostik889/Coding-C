//RETURN 1: FORMAT ERROR, THE PROGRAM WAS UNABLE TO SCANF FLOAT VALUE PROPERLY
//RETURN 2: NOT POSSIBLE TO MAKE A TRIANGLE



#include <stdio.h>

int format_error(void){
    return printf("FORMAT ERROR! The value has to be float.");
}

float the_max(float a, float b, float c){
    return a > (b > c ? b : c) ? a : (b > c ? b : c);
}
float the_min(float a, float b, float c){
    return a > (b > c ? c : b) ? (b > c ? c : b) : a;
}
//a, b, c
//a > (b > c ? b : c) ? a : (b > c ? b : c) -- efficient way to compare three numbers

int main(){
    printf("Write a C program that reads three floating values and check if it is possible to make a triangle with them. Also calculate the perimeter of the triangle if the said values are valid.\n");

    float arr_nums[3];
    const char *position[3] = {"first", "second", "third"};
    float sum =0;

    for(int i=0; i<3; i++){
        printf("Input the %s number: ", position[i]);
        if(scanf("%f", &arr_nums[i]) != 1){     //checking for data scaning
            format_error();
            return 1;
        }else{
            sum+=arr_nums[i];
        }
    }

    //finding the values of the rectangle
    float max_value = the_max(arr_nums[0], arr_nums[1], arr_nums[2]);
    float min_value = the_min(arr_nums[0], arr_nums[1], arr_nums[2]);
    float middle_value = sum - (max_value + min_value);

    if((min_value + middle_value) > max_value){
        printf("The perimeter of the rectangle is %f", sum);
        return 0;
    }else{
        printf("Not possible to make a triangle!");
        return 2;
    }
}