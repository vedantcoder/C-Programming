//Reverse an array(recursion)

#include<stdio.h>

void reverse(int arr[], int i, int j);

int main(){
    int n=5;
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n;i++){
    printf("%d", arr[i]);
    }
    reverse(arr,0,n-1);
    printf("\n");
    for(int i=0; i<n;i++){
        printf("%d", arr[i]);
    }
    return 0;
}
void reverse(int arr[], int i , int j){
    if(i>=j){
        return;
    }
    int temp;
    temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    reverse(arr,i+1, j-1);
}