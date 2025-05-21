#include<stdio.h>

void print(int arr[], int n);       //can use *arr instead

int main(){
    int marks[3];
    printf("Enter marks1: ");
    scanf("%d", &marks[0]);
    printf("Enter marks2: ");
    scanf("%d", &marks[1]);
    printf("Enter marks3: ");
    scanf("%d", &marks[2]);

    printf("Marks1: %d\n", marks[0]);
    printf("Marks2: %d\n", marks[1]);
    printf("Marks3: %d\n", marks[2]);

    int aadhar[5];
    int *ptr = aadhar;
    for(int i=0; i<=4; i++){
        printf("Enter aadhar%d : ", i+1);
        scanf("%d", &(*(ptr+i)));
    }

    for(int i=0; i<=4; i++){
        printf("%d\n", *(ptr+i));
    }
    
    int array[] = {1,2,3};
    print(array, 3);

    return 0;
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\t", arr[i]);
        }
}

/*
ARRAYS
Arrays: Collection of similar data types stored at contiguous memory locations

SYNTAX
datatype array_name[size]= {--values--}
- 0 based indexing

I/O
scanf("%d", &array_name[address]);
printf("%d", array_name[address]);

Array is a pointer.
int *ptr = &arr[0];
int *ptr = arr;
Both are same!

Arrays as Function argument
datatype function_name(datatype array_name[], datatype variable_name) OR 
datatype function_name(datatype *array_name, datatype variable_name)
function_name(array_name, variable_name) here variable_name is the lenght of the array
Since arrays are pointers too, arrays as argument are always call by reference and never call by value.

Multidimentional arrays
2D Arrays-
datatype array_name[][] = {{--values--},{--values--}}
2D coordinate system is used.

Searching : check if a number X is present in an array A or not ?
- Array is Unsorted
- Array is Sorted      

Insertion : Add an element X into an array A at some index i.

Deletion : remove an element X from an array A at some index i.

1. Linear Search - when array is unsorted - check element by element
2. Binary Search - Array must be sorted - check middle element
//Binary Search

#include <stdio.h>
#include<math.h>

int main()
{
    int arr[];
    int lo=0, hi=n-1;
    int X;
    
    while(lo<=hi){
        int mid = (lo+hi)/2;
        if(arr[mid]==X){
            return mid;
        }
        else if(arr[mid]>X){
            hi=mid-1;
        }
        else{
            lo = mid+1;
        }
    }
    
    return 0;
}
    
*/