#include <stdio.h>
//RETURNS printf("Format ERROR!"); if scnaf returns other value than 1, which means the scanf was not properly done
int format_error(void){
    return printf("Format ERROR! - value must be an integer!");
}

int main(){
    printf("Write a C program that accepts 4 integers p, q, r, s from the user where r and s are positive and p is even. If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print \"Correct values\", otherwise print \"Wrong values\".");
    printf("\nTest Data : \n");

    int arr_nums[4];
    char arr_chars[4] = {'p','q','r','s'};
    char arr_position[4][10] = {"first","second", "third", "fourth"};

    for(int i=0; i<4;i++){
        printf("Input the %s integer: ", arr_position[i]);
        if(scanf("%d", &arr_nums[i]) != 1){
            format_error();
            return 1;
        }
    }
    printf("%c", arr_chars[0]);
    //int arr_chars[0] = arr_nums[0];


    /*int p;
    if(scanf("%d", &p) != 1){
        format_error();
        return 1;
        
    }
    printf("Input the second integer: ");
    int q;
    if(scanf("%d", &q) != 1){
        format_error();
        return 1;
    }
    printf("Input the third integer: ");
    int r;
    if(scanf("%d", &r) != 1){
        format_error();
        return 1;
    }
    printf("Input the fourth integer: ");
    int s;
    if(scanf("%d", &s) != 1){
        format_error();
        return 1;
    }*/

}