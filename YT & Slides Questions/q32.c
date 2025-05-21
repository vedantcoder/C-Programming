//Sum of first N numbers

#include<stdio.h>
int sum(int n);
int Sum;
int main(){
    int n=5;
    int _sum = sum(n);
    printf("%d", _sum);
    return 0;
}

int sum(int n){     //S(n) = S(n-1) + n
    if(n==1){
        return 1;
    }
    Sum = sum(n-1) + n;
    return Sum;
}