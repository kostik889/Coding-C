#include <stdio.h>
//YEARS FROM NUMBER OF DAYS
int days_to_years(int days){
    return days/365;
}
//MONTHS FROM THE NUMBER OF DAYS, ...YEARS HAVE TO BE INCLUDED IN THE COUNTING
int days_over_years_to_months(int days_to_years, int days){
    return (days-days_to_years*365)/30;
}

int main(){
    printf("Write a C program to convert a given integer (in days) to years, months and days, assumes that all months have 30 days and all years have 365 days.\n");
    printf("Test Data :\n");
    printf("Input no. of days: ");
    int days;
    if(scanf("%d", &days) != 1){
        printf("The input is in incorrect format!\n");
        return 1;
    }
    return printf("%d Year(s)\n%d Month(s)\n%d Day(s)", days_to_years(days),days_over_years_to_months(days_to_years(days), days),(days - (days_to_years(days)*365) - (days_over_years_to_months(days_to_years(days), days)*30)));

}