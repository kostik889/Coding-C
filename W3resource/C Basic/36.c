#include <stdio.h>
#include <string.h>
#include <stdbool.h>


/*global variables*/
const char password[] = "1234";
char user_input[5];
/*------------------------------------------------------------------------------------*/

//FUNCTIONS
int introduction(void){
    return printf("Write a C program to read a password until it is correct. For wrong password print \"Incorrect password\" and for correct password print \"Correct password\" and quit the program. The correct password is 1234.\n");
}
void getting_input (void){
    fgets(user_input, 5, stdin);    
}
bool are_equal (void){
    for(int i =0; i<strlen(password); i++){
        if(user_input[i] != password[i])
            return false;
    }
    return true;
}
//MAIN FUNCTION
int main(void){
    introduction();

    printf("Input the password: ");
    do{
        getting_input();
    } while (are_equal() == false);
    printf("Correct password");

    return 0;    
}