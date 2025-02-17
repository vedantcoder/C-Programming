/*4.	Write a C program to convert specified days into years, weeks and days. Note: Ignore leap year.*/
#include<stdio.h>

int main(){
    int days;
    printf("Enter days: ");
    scanf("%d", &days);
    int years = days/365;
    int rem = days % 365;
    int weeks = rem / 7;
    int day = rem % 7;

    printf("%d days equals %d years, %d weeks and %d days.", days, years, weeks, day);
    return 0;
}