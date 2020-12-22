int main(){
    printf("Write a C program to convert specified days into years, weeks and days. Go to the editor");
    printf("\nNote: Ignore leap year. \n");

    int days = 1329;

    printf("Test Data :");
    printf("\nNumber of days : %d", days);

    printf("\nYears: %d", days/365);
    printf("\nWeeks: %d", (days - (days/365)*365)/7);
    printf("\nDays: %d", days - ((days/365)*365) - ((days - (days/365)*365)/7)*7);
}