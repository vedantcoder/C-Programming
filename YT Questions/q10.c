//Returning multiple values from a function
//Return sum, product and average of two numbers using a function

#include<stdio.h>

int function(int a, int b, int *_sum, int *_prod, int *_avg);

int main(){
    int a = 3;
    int b = 5;

    int sum;
    int prod;
    int avg;

    function(a, b, &sum, &prod, &avg);

    printf("sum = %d\n", sum);
    printf("prod = %d\n", prod);
    printf("avg = %d\n", avg);

    return 0;
}

int function(int a, int b,  int *_sum, int *_prod, int *_avg){
    *_sum = a+b;
    *_prod = a*b;
    *_avg = (a+b)/2;
    //now we need to return all 3, for that we declare these 3 variables in main function
}