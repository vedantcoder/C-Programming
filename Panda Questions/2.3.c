//3.	Write a program to find out how many of the numbers from 1 to 10 are greater than 3.

#include<stdio.h>

int main(){
    int count=0;
    for(int i=1; i<=10; i++){
        if(i>3){
            count  = count + 1;
        }
        else{
            count = count;
        }
    }
    printf("%d", count);
    return 0;
}