//1.	C program to calculate HCF of any two numbers. 

#include<stdio.h>
#include<math.h>

int main(){
    int num1, num2;
    int hcf = 1;
    scanf("%d %d", &num1, &num2);
    int max = (num1>num2) ? num1 : num2;
    for(int i=2; i<max; i++){
            if(num1 % i == 0 && num2 % i ==0){
                hcf = i;
            }
            else{
                hcf = hcf;
            }
    }
    printf("HCF of %d and %d is %d.", num1, num2, hcf);
    return 0;
}