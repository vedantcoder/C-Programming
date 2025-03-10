//17.	Write a program to find the roots of a quadratic equation ax2+bx+c=0 using switch-case statement.

#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    int op = (b*b)-4*a*c;

    switch(op>0){
        case 1: 
            printf("2 distict roots!");
        case 0:
            switch(op<0){    
            case 0:
                printf("2 equal roots!");
            case 1:
                printf("2 imaginary roots!");        
    }
    }
    return 0;
}