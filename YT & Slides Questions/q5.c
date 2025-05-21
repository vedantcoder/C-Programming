//Fibonacci sequence (recursion)

#include<stdio.h>
#include<math.h>

int n;
int fibo(int n);

int main(){
    int s= fibo(6);
    printf("%d\n", s);
    return 0;
}

int fibo(int n){                //fibonacci condition: T(n) = T(n-1) + T(n-2)
    if (n==1){
        return 1;
    }
    if (n==0){
        return 0;    
    }
    int FibNm1 = fibo(n-1);
    int FibNm2 = fibo(n-2);
    int FibN = FibNm1 + FibNm2;
    return FibN;
}