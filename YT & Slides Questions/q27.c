//Write a function which will read in a floating point number and return it’s sign, integral part, and decimal part. 


#include <stdio.h>
#include<math.h>

int main()
{
    float num;
    scanf("%f", &num);
    
    if(num>0){
        printf("Sign = +\n");
    }
    else if(num==0){
        printf("Sign = \n");
    }
    else{
        printf("Sign = -\n");
    }
    
    int mag = fabs(num);
    printf("Integral part = %d\n", mag);
    
    int wh = floor(num);
    float fr = num - wh;
    
    printf("Decimal part  = %f", fr);

    return 0;
}