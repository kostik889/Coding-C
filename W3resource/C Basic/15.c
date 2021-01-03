#include <stdio.h>
#include <math.h>
//it makes an absolute value from the value
float absolute (float val) {
    return (-1)*val;
}
//this function returns the smaller of the two values
float smaller(float val_1, float val_2){
    return val_1 > val_2 ? val_2 : val_1;
}
//this function returns the bigger of the two values
float bigger(float val_1, float val_2){
    return val_1 > val_2 ? val_1 : val_2;
}

int main(){
    printf("Write a C program to calculate the distance between the two points.\n");
    printf("Test Data :\n");
    
    printf("Input x1:");
    float input_x1;
    if(scanf("%f", &input_x1) != 1){
        printf("This is not a float value\n");
        return 1;
    }

    printf("Input y1:");
    float input_y1;
    if(scanf("%f", &input_y1) != 1){
        printf("This is not a float value\n");
        return 1; 
    }
    
    printf("Input x2:");
    float input_x2;
    if(scanf("%f", &input_x2) != 1){
        printf("This is not a float value\n");
        return 1;
    }
    
    printf("Input y2:");
    float input_y2;
    if(scanf("%f", &input_y2) != 1){
        printf("This is not a float value\n");
        return 1;
    }

    //if we found out the distance between the said points we could apply
    // square root (c^2 = a^2 + b^2) to find the real distance
    //the real problem is that there are many cases to solve

    float x,y;

    //here we solve the real X distance
    if((input_x1 && input_x2 > 0) || (input_x1 == 0) || (input_x2 == 0)){
        x = bigger(input_x1,input_x2) - smaller(input_x1,input_x2);
    }
    if((input_x1 < 0 && input_x2 > 0) || (input_x1 > 0 && input_x2 < 0) || (input_x1 == 0) || (input_x2 == 0)){
        if(input_x1 < 0)
            input_x1 = absolute(input_x1);
        if(input_x2 < 0)
            input_x2 = absolute(input_x2);
        x = bigger(input_x1,input_x2) + smaller(input_x1,input_x2);
    }
    if((input_x1 < 0 && input_x2 < 0)  || (input_x1 == 0) || (input_x2 == 0)){
        input_x1 = absolute(input_x1);
        input_x2 = absolute(input_x2);

        x = bigger(input_x1,input_x2) - smaller(input_x1,input_x2);
    }

    //here we solve the real y distance
    if((input_y1 && input_y2 > 0) || (input_y1 == 0) || (input_y2 == 0)){
        y = bigger(input_y1,input_y2) - smaller(input_y1,input_y2);
    }
    if((input_y1 < 0 && input_y2 > 0) || (input_y1 > 0 && input_y2 < 0) || (input_y1 == 0) || (input_y2 == 0)){
        if(input_y1 < 0)
            input_y1 = absolute(input_y1);
        if(input_y2 < 0)
            input_y2 = absolute(input_y2);
        y = bigger(input_y1,input_y2) + smaller(input_y1,input_y2);
    }
    if((input_y1 < 0 && input_y2 < 0) || (input_y1 == 0) || (input_y2 == 0)){
        input_y1 = absolute(input_y1);
        input_y2 = absolute(input_y2);

        y = bigger(input_y1,input_y2) - smaller(input_y1,input_y2);
    }

    printf("This is the distance of x after process: %f\n", x);
    printf("This is the distance of y after process: %f\n", y);

    //printf("bigger: %f smaller %f\n", bigger(input_x1,input_x2), smaller(input_x1,input_x2));
    //here we solved the y real distance
    //if(input_y1 && input_y2 > 0){
    //    y = bigger(input_y1,input_y2) - smaller(input_y1,input_y2);
    //}



    printf("Distance between the said points: %.4lf", sqrt(pow(x,2)+pow(y,2)));
    
}