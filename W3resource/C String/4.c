#include <stdio.h>

int main(){

    char str[100];
    int strlen = 0;

    printf("Input the string: ");
    fgets(str, 100, stdin); //funkce fgets vklada do retezce '\n'//

    for(int i = 0; str[i] > '\0'; i++){
        if(str[i] == '\n')
            break;
        strlen++;
        
    }
    //**printf("strlen: %d", strlen);   funkce pro kontrolni tisk**//
    printf("The characters of the string in reverse are :\n");
    for(int i = strlen-1; i >= 0; i--){  //tisk bez radku//
        printf("%c", str[i]);
        if(i != strlen)
            printf(" ");
    }
}