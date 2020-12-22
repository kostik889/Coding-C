#include <stdio.h>
#define STRMAXLENGTH 100

int main(){

    char str[STRMAXLENGTH];
    char letter;
    char letter_max;
    int letter_occurency = 0;
    int max_occurency = 0;
    int strlen = 0;

    printf("Input the string : ");
    fgets(str, STRMAXLENGTH, stdin);

    for(int i = 0; i < STRMAXLENGTH; i++){
        if(str[i] == '\n'){
            str[i] = '\0';
            break;
        }
        strlen++;
    }

    for(int i = 0; i < strlen; i++){
        if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))    //**podm¡nka pro ulo§en¡ znaku k porovn n¡**//
            letter = str[i];       //**ulo§¡ znak k porovn n¡**//
        for(int j = 0; j<=strlen; j++){
            if(letter == str[j])    //**pokud se slovo rovn  proch zen‚mu znaku ---
                letter_occurency++; //--pýiŸti jeho vìskyt**//
            if(letter_occurency > max_occurency){
                max_occurency = letter_occurency;
                letter_max = letter;
            }
            if(str[j] == '\0')
                letter_occurency = 0;
        }
    }
    printf("The Highest frequency of character '%c' appears number of: %d", letter_max, max_occurency);
}