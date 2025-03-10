//10.	Print the value of y for given x=2 & z=4 and analyze the output.

#include<stdio.h>

int main(){
    int x=2, z=4;
    int y;
    printf("x for next y=%d\n", x);
    y = x++ + ++x;      //6
    printf("y= %d\n", y);
    printf("x for next y=%d\n", x);
    y= ++x + ++x;       //11
    printf("y= %d\n", y);
    printf("x for next y=%d\n", x);
    y= ++x + ++x + ++x; //9
    printf("y= %d\n", y);
    printf("x for next y=%d\n", x);
    y = x>z;            //0
    printf("y= %d\n", y);
    printf("x for next y=%d\n", x);
    y= x>z? x:z;        //4
    printf("y= %d\n", y);
    printf("x for next y=%d\n", x);
    y = x&z;            //0
    printf("y= %d\n", y);
    printf("x for next y=%d\n", x);
    y= x>>2 + z<<1;     //0
    printf("y= %d\n", y);
    printf("x for next y=%d\n", x);
    return 0;
}