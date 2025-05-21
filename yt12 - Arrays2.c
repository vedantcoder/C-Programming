//Sorting, insertion, deletion in Arrays

#include<stdio.h>

void bubble_sort(int arr[], int n);
void selection_sort(int arr[], int n);
void insertion_sort(int arr[], int n);
void binary_search(int arr[], int n, int x);

int main(){
    int n = 6;
    int arr[n];
    for(int i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    bubble_sort(arr, n);
    selection_sort(arr, n);
    insertion_sort(arr, n);
    binary_search(arr, n, 4);
    printf("\n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}

void bubble_sort(int arr[], int n){
    int temp;
    for (int i=0; i<(n-1); i++){
        for(int j=0; j<(n-i-1); j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            else{
                continue;
            }
        }

    }
}

void selection_sort(int arr[], int n){
    int temp;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            else{
                continue;
            }
        }
    }
}

void insertion_sort(int arr[], int n){
    int temp;
    for (int i = 0; i <= n - 1; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}

void binary_search(int arr[], int n, int x){
    int lo = 0, hi = n-1;
    int mid = (lo+hi)/2;
    int flag=0;
    while(lo<=hi){
        mid = (lo+hi)/2;
        if(x==arr[mid]){
            printf("Element found at index %d", mid);
            flag =1;
            break;
        }
        else if(arr[mid]>x){
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
    }
    if(flag==1){
        return;
    }
    else if(flag==0){
        printf("Elenemt not found!!");
    }
}