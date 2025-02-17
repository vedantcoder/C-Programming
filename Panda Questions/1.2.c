/*2.	Write a C program intrst.c that calculates the total interest income on amount Rupees 5 lakhs in a period of 10 years. 
Show the results for simple interest, compounded interest when the compounding is done annually, semi-annually, quarterly, monthly and daily. 
Assume that the interest rate is 3.5% per year.*/

#include<stdio.h>

int main(){
    int si = 500000*3.5*5/100;
    printf("%d", si);
    return 0;
}