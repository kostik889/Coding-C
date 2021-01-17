//RETURN 1: FORMAT ERROR - INTEGER VALUE CAN NOT BE PROPERLY SCANNED

#include <stdio.h>
#include <stdbool.h>

/*global variables*/
int arr_int[2];
const char *arr_int_description[2] = {"x", "y"};
/*---------------------------------------------------------------------------------------------*/

//ERROR FUNCTIONS
int format_error (void){
    return printf("FORMAT ERROR! The value has to be an  integer.");
}
//FUNCTIONS
int introduction (void){
    return printf(" Write a C program to read the coordinates(x, y) (in Cartesian system) and find the quadrant to which it belongs (Quadrant -I, Quadrant -II, Quadrant -III, Quadrant -IV).\n");
}
bool getting_input(void){
    printf("Input two numbers:\n");
    for(int i =0; i<2; i++){
        printf("%s: ", arr_int_description[i]);
        if(scanf("%d", &arr_int[i]) != 1){
            format_error();
            return false;
        }
    }
    return true;
}
int quadrant_checking (int x, int y){
    if(x == 0 && y == 0)
        printf("No Quadrant - (0,0)");
    else if(x !=0 && y==0)
        printf("x-axis: %d", x);
    else if(x == 0 && y !=0)
        printf("y-axis: %d", y);
    else if(x>0 && y>0)
        printf("Quadrant I - (+,+)");
    else if(x<0 && y>0)
        printf("Quadrant II - (-,+)");
    else if(x<0 && x<0)
        printf("Quadrant III - (-,-)");
    else
        printf("Quadrant IV - (+,-)");
}
//MAIN FUNCTION
int main(void){
    introduction();

    if(getting_input() == false)
        return 1;
    else{
        quadrant_checking(arr_int[0], arr_int[1]);

        return 0;
    }
}