#include <stdio.h>

int main(){

    char str[100];

    printf("Input the string: ");
    fgets(str, 100, stdin);

    printf("The characters of the string are :\n");
    for(int i = 0; str[i] >= '\0'; i++)
    {
        if(str[i] == '\0')
            break;
        if(i!=0)
            printf(" ");
        printf("%c", str[i]);
    }
}