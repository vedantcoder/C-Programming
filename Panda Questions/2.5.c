//5.	Write a C program that accepts three integers and find the maximum of three. 

#include<stdio.h>

int main(){
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    int max = num1;
    if(num2>max){
        max = num2;
    }
    else{
        max = num1;
    }
    if(num3>max){
        max = num3;
    }
    else{
        max = max;
    }
    printf("Max is %d", max);
    return 0;
}