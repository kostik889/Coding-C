int main(){
    printf("Test Characters: 'X', 'M', 'L'\n");
    

    char xml[3] = {'X', 'M', 'L'};


    printf("The reverse of ");
    for(int i=0; i<3; i++)
        printf("%c", xml[i]);

    printf(" is ");
    for(int i=2; i>=0; i--)
        printf("%c", xml[i]);
}