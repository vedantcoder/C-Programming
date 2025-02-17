//9.	Write a program, which reads a,b,c and d and finds distance between points (a,b) and (c,d). 

#include<stdio.h>
#include<math.h>

int main(){
    printf("Enter points: \n");
    int a,b,c,d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    int num = pow(pow(d-b, 2) + pow(a-c, 2), 0.5);
    printf("Distance: %d", num);
}