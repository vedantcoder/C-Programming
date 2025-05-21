//Pattern1
/*   *   
    ***  
   ***** 
  ******* 
*/

#include <stdio.h>

int main()
{
    int num=0;
    scanf("%d", &num);

    int max=2*num-1;

    for(int i=1; i<=num; i++){
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
    }

    return 0;
}