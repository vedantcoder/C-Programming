/*1.	Write a C program that accepts a temperature in Fahrenheit and prints the corresponding temperature in Celsius.*/
#include<stdio.h>
#include<math.h>

int main(){
    int f;
    printf("Enter Temperature in F: ");
    scanf("%d", &f);
    int c;
    c = ((f-32)*5/9);
    printf("Temperature in C: %d", c);
    return 0;
}

//Correct