//Write a program to check if given character is digit or not.

#include<stdio.h>

int main(){
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    printf("%d", c>='0' && c<='9');
}