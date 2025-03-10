//4.	Write a C program to print all Armstrong numbers from 1 to N.

#include<stdio.h>
#include<math.h>

int main(){
    int N;
    int sum=0;
    int j;
    int count;
    printf("Enter a number: ");
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        int number =i;
        printf("Number = %d", number);
        do {                                //counting the number of digits in the number
            number = number / 10;
            printf()
            ++count;
        } while (number!= 0);
        printf("count = %d\n", count);
        while(i>0){
            j=i%10;
            sum = sum + pow(j,count);
            i=i/10;
        }
        if(sum==i){
            printf("%d\n", i);
        }
        else{
            continue;
        }

    }
    return 0;
}