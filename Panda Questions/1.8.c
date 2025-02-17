//8.	Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. And width of 5 inches.

#include<stdio.h>

int main(){
    int p = 2*(7+5);
    int a = 7*5;
    printf("Perimeter= %d and Area= %d.", p, a);
    return 0;
}