//sum of digits of a number using recursion
#include<stdio.h>

int num;
int a;
int add;
int sum(int num);

int main(){

    int print;
    print = sum(567);
    printf("%d\n", print);

    return 0;
}

int sum(int num){
    if(num==0)
        return 0;
    a = num % 10;
    add = add + a;
    sum(num/10);
    return add;
}