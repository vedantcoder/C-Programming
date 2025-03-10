//11.	Add N numbers entered by the user except the numbers which are multiples of 4. Take the value of N from the user.

#include<stdio.h>

int main(){
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    int sum = 0;
    for(int i=1; i<=N; i++){
        if(i%4!=0){
            sum = sum + i;
        }
        else{
            continue;
        }
    }
    printf("Sum of numbers till %d excluding multiples of 4 = %d", N, sum);
    return 0;
}