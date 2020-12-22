#include <stdio.h>
#define MAXSTRLENGTH 100

int main(){

    char str[MAXSTRLENGTH];
    int ch_val_min;

    char sorted[MAXSTRLENGTH];
    int strlen = 0;     //**poŸ¡t  pýesnou d‚lku stringu "bez '\0'" **//

    printf("Input the string : ");
    fgets(str, MAXSTRLENGTH, stdin);

    for(int i=0; i < MAXSTRLENGTH; i++){
        if(str[i] == '\n'){
            str[i] = '\0';
            break;
        }
        strlen++;
    }
    //**printf("strlen: %d", strlen);
    int j =0;
    for(int i=0; i<strlen; i++){
        j = i;
        ch_val_min = str[i];
        for(j=0; j<strlen; j++){
            if(str[j] != '.')
                ch_val_min = (ch_val_min < str[j] ? ch_val_min : str[j]);
            printf("i:%d j:%d  str[i] c: %c deci: %d    str[j] c: %c deci: %d\tch_val_min: %c\n",i, j, str[i], str[i], str[j], str[j], ch_val_min);
        }
        sorted[i] = ch_val_min;
    }
    sorted[strlen] = '\0';

    printf("c: %c deci: %d\n", sorted[0], sorted[0]);
    printf("%s", sorted);

}
