//Matrix Multiplication

#include <stdio.h>

int main(){
    int p,q,r;
    scanf("%d %d %d", &p, &q, &r);
    //scanf("%d %d", q, r);
    int arr1[p][q];
    int arr2[q][r];
    printf("%d %d %d\n", p,q,r);
    printf("Input matrix 1\n");
    for(int i=0; i<p;i++){
        for(int j=0; j<q; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Input matrix 2\n");
    for(int i=0; i<q;i++){
        for(int j=0; j<r; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    
    int arr3[p][r];
    
    for(int i=0; i<p; ++i){
        for(int j=0; j<r; ++j){
            arr3[i][j]=0;
            for(int k=0; k<q; ++k){
                arr3[i][j] = arr3[i][j] + arr1[i][k] + arr2[k][k];
            }
        }
    }
    
    for(int i=0; i<p; ++i){
        for(int j=0; j<r; ++j){
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
