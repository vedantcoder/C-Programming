//3.	Write a program to input any three integers distinct and display the greater of three integers.

#include<stdio.h>

int main(){
    int n1,n2,n3;
    printf("Enter 3 numbers: ");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    int max = 0;
    max = (n1>n2) ? n1:n2;
    if(n3>max){
        max = n3;
    }
    else{
        max = max;
    }
    printf("Max = %d" , max);
    return 0;
}