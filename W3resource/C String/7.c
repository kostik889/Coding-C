#include <stdio.h>
#define STRLENGTHMAX 100

int main(){
    
    char str[STRLENGTHMAX];
    int ac, dc, sc, strlen;

    ac=dc=sc=strlen = 0;

    printf("Input the string: ");
    fgets(str, STRLENGTHMAX, stdin);

    for(int i=0; i<STRLENGTHMAX; i++){
        if(str[i] == '\0')
            break;
        strlen++;
    }
    strlen -= 1; //**odeŸten¡ znaku '\n' z funkce fgets**//
    //**printf("strlen %d", strlen);
    for(int i = 0; i <= strlen; i++){
        if(str[i] >= '0' && str[i] <= '9')
            dc++;
        if(str[i] >= 'A' && str[i] <= 'z')
            ac++;
        else
        {
            sc++;
        }
        
    }
    sc -=1; //**odeŸten¡ znaku '\0'**//
    printf("Number of Alphabets in the string is: %d\n", ac);
    printf("Number of Digits in the string is : %d\n", dc);
    printf("Number of Special characters in the string is : %d", sc);

}