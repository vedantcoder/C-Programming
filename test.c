#include <stdio.h>
#include<math.h>

void print(int arr[], int n);

int main() {
    int array[] = {1,2,3};
    print(array, 3);
    return 0;
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
        }
}