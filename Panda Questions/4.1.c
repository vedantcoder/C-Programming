//1.	Write a C Program to find the factorial of a number.

#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int factorial = 1;
    for(int i=num; i>=1; i--){
        factorial = factorial * i;
    }
    printf("Factorial of %d = %d", num, factorial);
    return 0;
}