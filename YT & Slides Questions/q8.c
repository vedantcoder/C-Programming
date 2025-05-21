//create your own power function

#include<stdio.h>

int a;
int b;
int prod = 1;
int power(int a, int b);

int main(){

    int display = power(2,4);
    printf("%d\n", display);
    return 0;
}

int power(int a, int b){ //a^b = a*a*a...(b times)
    if (b==0){
        return 1;}
    prod = prod * a;
    power(a,b-1);
    return prod;
}