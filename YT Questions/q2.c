//Write a program to print the smallest number of two without if-else

#include<stdio.h>
#include<math.h>

int main(){
    int num1, num2;
    
    printf("Enter Num1: ");
    scanf("%d", &num1);
    
    printf("Enter Num2: ");
    scanf("%d", &num2);

    int c = (num1>num2) ? num1:num2;        //Here ternary operator is used...will see further!

    printf("The smaller no. is %d", c);

    return 0;
}