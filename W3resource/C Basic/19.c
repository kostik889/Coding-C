#include <stdio.h>
//RETURN 1 = ENDED WITH BAD FORMATING
//RETURN 2 = ENDED WITH WRONG VALUE
//RETURN 3 = ENDED WITH ODD VALUE 
//RETURNS printf("Format ERROR!"); if scnaf returns other value than 1, which means the scanf was not properly done

int format_error(void){
    return printf("Format ERROR! - value must be an integer!");
}

int value_error(char letter){
    //printf("This %c", letter);
    return printf("The \"%c\" value has to be positive!\nCome back with positive value...", letter);
}

int not_even (char letter){
    return printf("The \"%c\" value is not even...that's odd...\n", letter);
}

int main(){
    printf("Write a C program that accepts 4 integers p, q, r, s from the user where r and s are positive and p is even. If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print \"Correct values\", otherwise print \"Wrong values\".");
    printf("\nTest Data : \n");

    int arr_nums[4];    //p,q,r,s
    char arr_chars[4] = {'p', 'q', 'r', 's'};

    //scanning values, checking for validity given data
    for(int i=0; i<4;i++){
        printf("Input the %c integer: ", arr_chars[i]);
        if(scanf("%d", &arr_nums[i]) != 1){
            format_error();
            return 1;
        }
        //checking for validity of r and s value - have to be greater than 0
        if((arr_chars[i] == 'r' && arr_nums[i] <=0) || (arr_chars[i] == 's' && arr_nums[i] <=0)){
            value_error(arr_chars[i]);
            return 2;
        }
        //checking for validity of p value - has to be even => p%2==0
        if(arr_chars[i] == 'p' && (arr_nums[i]%2 == 0)){
            not_even(arr_chars[i]);
            return 3;
        }
    }
    //if q > r && s > p;    also if of r + s >  p + q 
    if((arr_nums[1] > arr_nums[2]) && (arr_nums[3] > arr_nums[0])){
        if((arr_nums[2]+arr_nums[3]) > (arr_nums[0]+arr_nums[1])){
            return printf("Correct values");
        }else{
            return printf("Wrong values");
        }
    }else{
        return printf("Wrong values");
    }
}