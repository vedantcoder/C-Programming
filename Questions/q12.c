//Storing the first n fibonacci numbers in an array.
#include<stdio.h>

int first_term = 1;
int second_term = 1;
int next_term = 1;
int n;
int array1(int n);
void print(int arr[], int n);

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    array1(num);
    return 0;
}

int array1(int n){
    int arr[n];
    arr[0] = 1;
    for(int i=1; i<n; i++){
    arr[i] = next_term;
    next_term = first_term + second_term;
    first_term = second_term;
    second_term = next_term;
    }
    print(arr, n);

}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
        }
}