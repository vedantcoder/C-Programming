//4.	A Fibonacci sequence is defined as follows: the first and second terms in the sequence are 0 and 1. 
//Subsequent terms are found by adding the preceding two terms in the sequence. 
//Write a C program to generate the first n terms of the sequence. The user can declare 'n'.

#include<stdio.h>

int main(){
    int n = 10;
    int num1 = 1;
    int num2 = 1;
    printf("%d %d ", num1, num2);
    int num3;
    for(int i=1; i<=n-2; i++){
        num3 = num1 + num2;
        printf("%d ", num3);
        num1 = num2;
        num2 = num3;
    }
    return 0;
}