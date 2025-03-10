//14.	Write a C program to find whether the given number is Palindrome or not

#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("n = %d\n", n);
    int og_n = n;
    int n1,n2;
    //No of digits
    int count = 0;
    do{
        n = n/10;
        ++count;
    }while(n!=0);
    n = og_n;
    int og_count = count;
    printf("No of digits= %d\n", count);

    //check
    for(int i= 1; i<=(og_count/2)+1; i++){
        if(i==(og_count/2)+1){
            printf("Number is a palindrome!!");
            break;
        }
    n1 = n%10;
    n = og_n;
    n2 = n/pow(10, count-i);
    n2 = n2 % 10;
    n = og_n;
    printf("%d %d \n", n1, n2);
    if(n1==n2){
        n = n/10;
        og_n = og_n/10;
        count = count -1;
        printf("n = %d\n", n);
        continue;
    }
    else{
        printf("Number is not a palindrome!!\n");
        break;
    }
    printf("Number is palindrome!!\n");
}
    return 0;
}