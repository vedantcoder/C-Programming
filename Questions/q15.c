//Convert Lowercase to Uppercase and vice versa in a string
#include<stdio.h>

void swap(char arr[]);

int main(){
    char array1[100];
    fgets(array1, 100, stdin);
    swap(array1);
    return 0;
}

void swap(char arr[]){
    for(int i=0; arr[i]!=0; i++){
        if('A' <= arr[i] <='Z'){
        arr[i] = arr[i] + 32;
        }
        else if('a'<=arr[i]<='z'){
            arr[i] = arr[i] - 32;
        }
        else{
            arr[i] = arr[i];
        }
    }
    puts(arr);
}