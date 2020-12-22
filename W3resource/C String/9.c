#include <stdio.h>
#define STRMAXLENGTH 100

int main(){

    char str[STRMAXLENGTH];
    int vowel, consonant;

    vowel = consonant = 0;

    printf("Input the string: ");
    fgets(str, STRMAXLENGTH, stdin);

    for(int i = 0; i < STRMAXLENGTH; i++){
        if(str[i] == '\n'){
            str[i] = '\0';
            break;
        }
        if(str[i] == 'a' || str[i] =='e' ||str[i] == 'i' ||str[i] == 'o' || str[i] =='u' ||str[i] == 'y'|| str[i] == 'A' || str[i] =='E' ||str[i] == 'I' ||str[i] == 'O' || str[i] =='U' ||str[i] == 'Y')
            vowel++;
        else if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            consonant++;
    }
    printf("The total number of vowel in the string is : %d", vowel);
    printf("\nThe total number of consonant in the string is : %d", consonant);

}