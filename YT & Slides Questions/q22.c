//GCD

#include <stdio.h>

int main()
{
   int n1, n2;
   scanf("%d %d", &n1, &n2);
   int gcd = 1;
   int n = (n1>n2) ? n2 : n1;
   for(int i=2; i<=n; i++){
       if(n1%i==0 && n2%i==0){
           gcd = i;
       }
       else{
           continue;
       }
   }
   printf("gcd = %d", gcd);
   return 0;
}