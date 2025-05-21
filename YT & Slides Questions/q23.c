//Enter a number and reverse the number

#include <stdio.h>

int main()
{
    int num=0, new_num=0;
    scanf("%d", &num);
    
    int digit;
    while(num!=0){
        digit = num % 10;
        new_num = new_num * 10 + digit;
        num = num / 10;
    }
    printf("%d", new_num);
    return 0;
}