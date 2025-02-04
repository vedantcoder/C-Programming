//Input user's name & print its length using string
#include<stdio.h>

int length(char arr[]);

int main(){
    printf("Enter your name: ");
    char name[100];
    fgets(name, 100, stdin);
    int len = length(name);
    printf("Length of string is: %d\n", len);
    return 0;
}

int length(char arr[]){
    int count = 0;
    for(int i=0; arr[i]!='\0'; i++){
        count = count + 1;
    }
    return count-1;
}