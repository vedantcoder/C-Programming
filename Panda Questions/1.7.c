/*7.	Write a program to delete the last digit*/

#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int new = num / 10;
    printf("Last digit deleted: %d", new);
    return 0;
}