#include<stdio.h>

int main(){ 
            
    char c;
    printf("Enter character: ");
    scanf("%c", &c);
    switch (c)
    {
        default:
        printf("Invalid Character\n");
        break;
        case 'm':
        printf("Monday\n");
        break;                          //similarly other days, too lazy to add them lol
    }
    
    int age;                                        
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age>=18){
        printf("You are an adult.\n");
        printf("You are eligible to vote!\n");
    }
    else{
        printf("You are not an adult.\n");
        printf("You are not eligible to vote.\n");
    }

    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if(marks>90){
        printf("A Grade\n");
    }    
    else if (marks<=90&&marks>80){
        printf("B grade\n");
    }
    else{
        printf("C grade\n");        
    }

    int year;
    printf("Enter your year: ");
    scanf("%d", &year);
    (year==1) ? printf("Fresher\n") : printf("Senior\n");

    int num;
    printf("Enter your number: ");
    scanf("%d", &num);    
    if(num>=0){
        printf("Positive Number\n");
        if(num%2==0){
            printf("Even Number\n");
        }    
        else{
            printf("Odd Number\n");
        }
    }
    else{
        printf("Negative Number\n");
    }

    printf("Thank you!!");

    return 0;
}

/*
CONDITIONAL STATEMENTS
Ternary Operator (same in C++ & JAVA, some companies ask in placements!)
(Condition) ? doSomething if TRUE : doSomething if FALSE
Ex. c = (a<b) ? a:b 
so, c = a if given condition of a<b is true else c = b if condition is false.
*/