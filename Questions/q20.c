//2 numbers a&b are written in a file. Replace them with their sum.

#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("q20.txt", "r");
    int num1, num2;
    fscanf(fptr, "%d", &num1);
    fscanf(fptr, "%d", &num2);
    printf("%d\n", num1);
    printf("%d\n", num2);
    fclose(fptr);

    int sum;
    sum = num1 + num2;

    fptr = fopen("q20.txt", "w");
    fprintf(fptr, "%d", sum);
    fclose(fptr);

    return 0;
}