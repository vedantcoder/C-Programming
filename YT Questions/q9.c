//Swapping 2 numbers a,b (by value & by reference)

#include<stdio.h>

int swap(int a, int b);
int _swap(int* a, int* b);

int main(){
    int x = 5, y = 10;
    swap(x,y);
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    // Here a & b are interchanged by x & y are not interchanged as we have passed the value of x & y by value not by reference

    _swap(&x,&y);
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    // Here both a & b and x & y are interchanged as we have passed the value of x & y by reference

    return 0;
}

int swap(int a, int b){
    int t;
    t = a;
    a = b;
    b = t;
    printf("new a = %d\n", a);
    printf("new b = %d\n", b);
}

int _swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
    printf("new a = %d\n", *a);
    printf("new b = %d\n", *b);
}