//12.	Write a program to print value in Decimal, Octal, and Hexadecimal using printf.

#include<stdio.h>

int main(){
    int num;

    // Input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Printing the number in different formats
    printf("Decimal: %d\n", num);
    printf("Octal: %o\n", num);
    printf("Hexadecimal: %x\n", num);
    printf("Hexadecimal (uppercase): %X\n", num);

    return 0;
}

/*
%d → Prints the number in Decimal format.
%o → Prints the number in Octal format.
%x → Prints the number in Hexadecimal (lowercase) format.
%X → Prints the number in Hexadecimal (uppercase) format.
*/