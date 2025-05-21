//Reverse an array

#include<stdio.h>

void reverse_normal(int arr[], int n);

int main(){
    int n=5;
    int arr[n];
    for(int i=0;i<5;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    reverse_normal(arr, n);
    for(int i=0;i<5;i++){
        printf("%d ", arr[i]);
    }
}

void reverse_normal(int arr[], int n){
    int temp;
    for(int i=0;i<n/2;i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}