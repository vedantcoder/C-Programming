/*6.	Write a C program to print the following characters in a reverse way.*/

#include<stdio.h>

int main(){
    char ch1, ch2, ch3;
    ch1 = 'P', ch2 = 'C', ch3 = 'M';
    printf("Reverse of %C%C%C is %C%C%C.", ch1, ch2,ch3, ch3, ch2,ch1);
    return 0;
}