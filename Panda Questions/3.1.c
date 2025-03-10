//1.	Write a program to read an alphabet from the user and convert into upper case if the entered alphabet is lowercase, otherwise display an appropriate message.

#include<stdio.h>

int main(){
    char c;
    printf("Enter a letter: ");
    scanf("%c", &c);
    if(h>='a' && c<='z'){
        printf("Letter in upper case is: %c", c-32);
    }
    else{
        printf("Please enter a lower case alphabet!");
    }
    return 0;
}