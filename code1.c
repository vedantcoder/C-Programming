#include<stdio.h>

int main(void){
    double miles,
            kms;
    
    printf("Enter distance in miles> ");
    scanf("%lf", &miles);

    kms = 1.609*miles;
    printf("The distance is %f kilometers.\n", kms);

    return(0);
}