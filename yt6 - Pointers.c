#include<stdio.h>
#include<math.h>

int n;
int square(int n);
int _square(int *n);

int main(){
    int *p;
    printf("Size of a pointer is: %d\n", sizeof(p));

    int num = 123456789;
    int *ptr = &num;
    int _num = *ptr;
    printf("ptr (using p) = %p\n", ptr);        //ptr address in hexadecimal
    printf("ptr (using u) = %u\n", ptr);        //ptr address in decimal
    printf("ptr (using d) = %d\n", *ptr);       //value at ptr in integer
    printf("_num = %d\n", _num);                //value of new variable _num
    printf("_num = %p\n", _num);                //address of variable _num
    printf("--------------------------------------\n");

    int num1 = 5;
    square(num1);
    printf("num1 = %d\n", num1);

    _square(&num1);
    printf("num1 = %d\n", num1);

    return 0;
}

int square(int n){
    n = n * n;
    printf("Square = %d\n", n);
}

int _square(int * n){
    (*n) = (*n) * (*n);
    printf("Square = %d\n", *n);
    }

/*
POINTERS
Pointers: A variable that stores the memory address of another variable!
pointer(address of variable(value of variable))
* = 'value at address' operator or 'dereferencing' operator
    (Should not be confused with the * in the   pointer declaration)
& = 'address of' operator

SYNTAX
datatype *pointer_variable;

Size of any pointer in GCC is 4.

When declaring a pointer, it is a good idea to always initialize it to NULL (a special pointer constant)

While printing- 
%p - printed in hexadecimal form
%u - printed in decimal form

datatype of pointer = datatype of variable to be stored.

print
age = value of variable age
*ptr = value at address in ptr
*(&age) = value at address of age
(all 3 are the same i.e., age)

Pointer to pointer = stores the memory address of a pointer
pointer(address of pointer(address of variable(value of variable)))

SYNTAX
datatype **pointer-to-pointer_variable

Declaring functions that take pointer as argument
int _square(int *n){
    (*n) = (*n) * (*n);
    printf("Square = %d\n", *n);
    }
when you pass an argument into a function by value the original value does not get altered.
when you pass an argument into a function by reference the original value gets altered.

Pointer can be incremented & decremented.
ptr ++, 
so here is ptr was storing a memory location named '2000' it will not be storing a memory location '2004' which is the next memory
location after '2000'.
ptr--;
similarly for ptr-- it will store '1996'.

CHAR = 1
INT = 4
FLOAT = 4

We can subtract one pointer from another

We can compare two pointers (true/false output)
*/
