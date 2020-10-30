#include <stdio.h>
#define MAXLENGTH 100

int main(){

    char str1[MAXLENGTH];
    char str2[MAXLENGTH];
    int strlen1 = 0, strlen2 = 0;
    int equal = 0;

    printf("Input the 1st string : ");
    fgets(str1, MAXLENGTH, stdin);
    printf("Input the 2nd string : ");
    fgets(str2, MAXLENGTH, stdin);

    
    for(int i = 0; str1[i] > '\0'; i++)
        strlen1++;
    for(int i = 0; str2[i] > '\0'; i++)
        strlen2++;
    //**printf("strlen1 %d  strlen2 %d", strlen1, strlen2);**//
    if(strlen1==strlen2){
        printf("The length of both string are equal.");
        for(int i = 0; i <= strlen1-2; i++){    //** chceme porovnavat ŸistØ znaky, funkce fgets vklada \n a na konci stringu je \0 **//
            if(str1[i] == str2[i])
                equal = 1;
            else
            {
                equal = 0;
            }
        }
    }
    if(equal == 1)
        printf("\b and also both string are equal.");    
            
}