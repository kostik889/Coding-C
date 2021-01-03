#include <stdio.h>

int main(){
    printf(" Write a C program to calculate a bike?s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters, float number ? 2 decimal point).\n");
    printf("Test Data :\n");
    printf("Input total distance in km: ");
    int distance;
    if(scanf("%d", &distance) != 1){
        printf("This is not an integer\n");
        return 1;
    }
    printf("Input total fuel spent in liters: ");
    float fuel_in_liters;
    if(scanf("%f", &fuel_in_liters) != 1){
        printf("This is not a 2 decimal point float number\n");
        return 1;
    }
    float average;
    printf("Average consumption (km/lt) %.3f", average = distance/fuel_in_liters);
}