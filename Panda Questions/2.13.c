//13.	Write a C program to find whether the given number is Armstrong number or not

//COPY PASTE

/* Armstrong Numbers:   abcd... = a^n + b^n + c^n + d^n + ...
                        153 = 1^3 + 5^3 + 3^3 */

//Program to check if a number is an Armstrong Number. (IMPORTANT)

#include<stdio.h>
#include<math.h>

int main(){
    int num;
    int og_num;
    int a;
    int sum;
    int count = 0;
    printf("Enter a number: ");
    scanf("%d", &num); 
    sum = 0;
    og_num=num;

    do {                                //counting the number of digits in the number
        num /= 10;
        ++count;
    } while (num!= 0);                  //here num becomes zero

    num = og_num;
    while(num!=0){                      //finding sum
        a = num%10;
        sum = sum + pow(a,count);
        num = num / 10;
    }                                   //here num becomes zero again

    if(sum==og_num){                    //final check if sum=num
        printf("Yes.\n");
    }    
    else{
        printf("No");    
    }    
}

/*
There is a lot to learn from this question.
do while is used to find the number of digits in the number
since we are manipulating the value of num itself and making it 0 eventually, that too twice in the code, we need to have another
variable, here og_num, to compare with our sum in the end of the program for final execution of condition.
*/