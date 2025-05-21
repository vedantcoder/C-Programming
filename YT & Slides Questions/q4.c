//Printing factorial of a number using recursion

#include<stdio.h>
#include<math.h>

int num;
int factorial(int num);

int main(){
    int product = factorial(5);
    printf("Factorial: %d", product);

    return 0;
}

int factorial(int num){
    if (num==1)
        return 1;
    if (num==0)
        return 1;    
    int prod, prod1;
    prod1 = factorial(num-1);
    prod = prod1*num;
    return prod;
}