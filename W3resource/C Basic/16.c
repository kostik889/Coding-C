#include <stdio.h>

int main(){
    printf("Write a C program to read an amount (integer value) and break the amount into smallest possible number of bank notes.\n");
    printf("Test Data :\n");
    printf("Input the amount: ");
    int amount;
    if(scanf("%d", &amount) != 1){
        printf("This is not an integer value!\n");
        return 1;
    }

    //here are some given notes values stored in array
    float notes_array[7] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00};


    float test =notes_array[0];

    for(int i=0; i < 7; i++){
        printf("%d Note(s) of %.2f\n", (int)(amount/notes_array[i]), notes_array[i]);
        amount = amount - (notes_array[i])*((int)(amount/notes_array[i]));
    }
}