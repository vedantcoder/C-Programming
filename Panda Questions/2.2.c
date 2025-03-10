//2.	Write a program to print the numbers between 1 and 10, along with an indication of whether each is even or odd, like this:

#include<stdio.h>

int main(){
    for(int i=1; i<=10; i++){
        if(i%2==1){
            printf("%d is odd.\n", i);
        }
        else{
            printf("%d is even.\n", i);
        }
    }
    return 0;
}