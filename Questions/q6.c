//Fibonacci using loop

#include<stdio.h>

int main(){
    int i = 1;
    int term1 = 0;
    int term2 = 1;
    int term =1; 
    while(i<=10){
        printf("%d\n", term);
        term = term1 + term2;
        term1 = term2;
        term2 = term;
        i++;
        }
}