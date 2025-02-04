#include<stdio.h> //Pre Processor Directive

int main(){                               //Main Function
    printf("Hello World\n");              //Semicolon is analogous to full stop, \n moves to new line after printing

    int age=18;
    printf("My Age is %d.\n", age);        //Indicate a placeholder with % followed by Format Specifier and mention variable name at the end

    printf("Age? ");
    scanf("%d", &age);              //scanf takes input scanf("Format", &variable)
    printf("Now your age is %d.\n", age);
    
    return 0;
}

/*
DATATYPES, VARIABLES, INPUT, OUTPUT
Data Types:
Char
Unsigned Char
Int
Unsigned Int
Short Int
Unsigned Short Int
Long Int
Unsigned Long Int
Float
Double
Long Double*/

/*Format Specifiers
%d = Integer
%f = Float
%c = Char
*/