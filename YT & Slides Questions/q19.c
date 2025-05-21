//Write all odd numbers from 1 to n

#include<stdio.h>

int main(){
    int n;
    int odd = 1;
    printf("Enter a number n: ");
    scanf("%d", &n);
    
    FILE *fptr;
    fptr = fopen("q19.txt", "w");
    for (int i = 1; i<=n; i++)
    {
        fprintf(fptr, "%d\t", odd);
        odd = odd + 2;
    }
    fclose(fptr);

    return 0;
}