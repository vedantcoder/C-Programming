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