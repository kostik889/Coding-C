#include <stdio.h>

int main(){

    char str[100];
    int wc = 1; //uprava pro spravny pocet slov//

    printf("Input the string: ");
    fgets(str, 100, stdin);

    for(int i=0; str[i] > '\0'; i++){
        if(str[i] == '\n')
            str[i] = '\0';
    //**printf("%d %c = %d\n", i, str[i], str[i]);**//
    }
    for(int i=0; str[i] > '\0'; i++){
        if(str[i] == ' ' && '\n')
            ++wc;
    }
    printf("Total number of words in the string is : %d", wc);
}