#include<stdio.h>

int main(){
    //while
    int i=1;
    printf("While\n");
    while(i<=5){
        printf("Hello World.\n");
        ++i;
    }
    printf("---------------\n");

    //do while
    int m=1;
    printf("Do While\n");
    do{
        printf("Hello World.\n");
        ++m;
    }while (m<=5);
    printf("---------------\n");    

    //for
    int n;
    printf("For\n");
    for(n=1; n<=5; n=n+1){
        printf("Hello World.\n");
    }
    printf("---------------\n");

    //Sum of first n natural numbers
    int s;
    printf("Enter a number: \n");
    scanf("%d", &s);
    printf("Sum of first %d numbers: \n", s);
    int j=1;
    int sum = 0;
    while(j<=s){
        sum = sum + j;
        ++j;
    }
    printf("%d\n", sum);

    //Table of number
    int num;
    printf("Enter a number: \n");
    scanf("%d", &num);
    int o=1;
    printf("Table of %d:\n", num);
    while(o<=10){
        int product = num * o;
        printf("%d\n", product);
        ++o;
    }
    
    //using break
    int num1;
    for(num1; num1%2==0; ){
        printf("Enter a number: \n");
        scanf("%d", &num1);
        if(num1%2==1){
            printf("Wrong\n");
            break;
        }
        printf("Correct\n");
    }
}



/*
LOOP CONTROL
WHILE
while(condition){
    statements;
    counter;
}

DO WHILE
do{
    statements;
    counter;
}while(condition)

FOR
for(initiallization; condition; counter){
    statements;
}

INCREMENT OPERATOR
i++ implies use and then increase (post increment operator)
++i implies increase and then use (pre increment operator)
(Same for decrement operator)

BREAK
Exiting the loop

CONTINUE
Skip to next iteration
*/