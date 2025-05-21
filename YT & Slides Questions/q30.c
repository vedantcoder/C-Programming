#include<stdio.h>

void print(int n, int i);


int main(){

    int n=5;
    print(n, 1);

    return 0;
}

void print(int n, int i){
    if(i>n){
        return;
    }
    printf("%d\n", i);
    print(n,i+1);
}