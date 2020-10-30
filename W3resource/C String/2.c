#include <stdio.h>

int main(){

    char string[100];
    int strlen = 0;

    printf("Input the string: ");
    fgets(string, 99, stdin);

    for(int i = 0; string[i] >= '\0'; i++)
    {
        //**printf("%d %d %c\n", i+1, string[i], string[i]);   testovaci tisk **//
        if(string[i] == '\0')
            break;
        ++strlen;
    }
    printf("Length of the string is: %d", strlen);

    
}