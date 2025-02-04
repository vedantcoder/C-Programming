//Function to reverse an array

#include<stdio.h>

void reverse(int *array, int n);
void print_array(int array1[], int m);
int arr[]={1,2,3,4,5,6};

int main(){
    print_array(arr, 6);
    reverse(arr, 6);
    print_array(arr, 6);
    return 0;
}

void reverse(int *array, int n){
    for(int i=0; i<n/2; i++){
        int first_term = array[i];
        int second_term = array[n-i-1];         //in any exchange process n-i-1 is used
        array[i] = second_term;
        array[n-i-1] = first_term;
    }
}

void print_array(int array1[], int m){
    for(int i=0; i<m; i++){
        printf("%d\t", arr[i]);
        }
    printf("\n");    
}