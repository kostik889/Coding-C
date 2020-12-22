#include <stdio.h>
#define STRMAXLENGTH 100

int main(){

    char str[STRMAXLENGTH];
    char strcp[STRMAXLENGTH];
    int cpnum;

    printf("Input the string : ");
    fgets(str, STRMAXLENGTH, stdin);

    for(int i=0; i <STRMAXLENGTH; i++){
        if(str[i] == '\n'){
            str[i] = '\0';
            strcp[i] = '\0';
            cpnum = i+1;
            break;
        }
        strcp[i] = str[i];
    }
    printf("\nThe First string is : %s", str);
    printf("\nThe Second string is : %s", strcp);
    printf("\nNumber of characters copied : %d", cpnum);

}