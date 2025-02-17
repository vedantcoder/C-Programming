//implementing printf() statement within another printf() statement in C.

#include<stdio.h>

int main(){
    printf("My name is Vedant.", printf("Vedant "));
    return 0;
}

//printf returns no of chars printed.
//scanf returns no of inputs taken.

/*
1) First it will execute inner printf

2) inner printf return with the string length.

3) that is used in outer printf with %d specifier.

*/