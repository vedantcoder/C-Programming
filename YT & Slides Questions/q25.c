//Pattern2
/*
    *
   ***
  *****
 *******
  *****
   ***
    *
*/

#include <stdio.h>

int main()
{
    int num=0;
    scanf("%d", &num);

    int max=2*num-1;
    int i = 1;
    while(i<=num){
        for(int j=1; j<=(num-i); j++){
            printf(" ");
        }
        for(int k=1; k<=(2*i-1); k++){
            printf("*");
        }
        for(int j=1; j<=(num-i); j++){
            printf(" ");
        }
        printf("\n");
        i++;
    }
    int z = num-1;
        while(z>0){
        for(int j=1; j<=(num-z); j++){
            printf(" ");
        }
        for(int k=1; k<=(2*z-1); k++){
            printf("*");
        }
        for(int j=1; j<=(num-z); j++){
            printf(" ");
        }
        printf("\n");
        z--;
    }
    

    return 0;
}