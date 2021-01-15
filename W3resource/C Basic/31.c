//RETURN 1: FORMAT ERROR - INPUT WAS NOT AN INTEGER
#include <stdio.h>
#include <stdbool.h>

/*initializing the global variable*/
int number;


int format_error(void){
    return  printf("FORMAT ERROR! Value has to be an integer.");
    }
bool getting_input(void){
    printf("Input an integer: ");
    if(scanf("%d", &number) !=1){
        format_error();
        return false;
    }else{
        return true;
    }
}
bool is_positive (void){
    if(number>0){
        return true;
    }else if(number <0){
        return false;
    }    
}
bool is_even(void){
    if(number%2==0){
        return true;
    }else if(number%2 !=0){
        return false;
    }
}


int main(void){
    printf("Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. Print even if the number is 0.\n");

    if(getting_input() == false){
        return 1;
    }
    else{
        if(number == 0){
            printf("The number is zero");
            return 0;
        }else if(is_positive() == true){
            if(is_even() == true){
                printf("Positive Even");
                return 0;
            }else if(is_even() == false){
                printf("Positive Odd");
                return 0;
            }
        }else{
            if(is_even() == true){
                printf("Negative Even");
                return 0;
            }else if(is_even() == false){
                printf("Negative Odd");
                return 0;
            }
        }   
    }
}