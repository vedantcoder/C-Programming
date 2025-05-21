#include<stdio.h>
#include<math.h>

void printHello();
void Greet();
int a;
int b;
int sum(int a, int b);
int count;
void print(int count);
int count1;
int nn(int count1);

int main(){
    printHello();

    Greet();

    int s = sum(a,b);                       //here a and b are arguments
    printf("Sum is %d\n", s); 

    print(5);

    int n = nn(10);
    printf("%d", n);

    return 0;
}

void printHello(){
    printf("Hello World.\n");
}

void Greet(){
    char ch;
    printf("Enter country code: ");
    scanf("%c", &ch);
    if(ch=='i'||ch=='I')
        printf("Namaste\n");
    else if(ch=='f'||ch=='F')
        printf("Bonjour\n");
    else
        printf("Invalid.\n");
}

int sum(int a, int b){                      //here a and b are parameters
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    return a+b;   
}

//using recursion
void print(int count){
    if (count==0)
        return;
    printf("Hello\n");
    print(count-1);
}

int nn(int count1){             //S(n) = S(n-1) + n
    int sumN, sumNm1;
    if(count1==1)
        return 1;
    sumNm1 = nn(count1-1);    
    sumN = sumNm1 + count1;
    return sumN;
}

/*
FUNCTIONS & RECURSION
Writing a function in C
(Similar to what we have done in code2.c file from the textbook)

Syntax 1: Function Prototype (Tell the C compiler)
return_type function_name(); [void printHello();]

Syntax 2: Function Definition (Do the Work)
return_type function_name(){
    statements;
}
[void printHello(){
    printf("Hello World.");
    }
]

Syntax 3: Function Call (Use the work)
int main(){
    function_name();
    other statements;
}
[int main(){
    printHello();
    return 0;
    }
]

IMPORTANT!
any manipulation done in user defined function does not affect the original value of the variable in the main function!!
a copy of argument is passed to the function

Recursion: when a function calls itself
iterations & loops can be used iterchangeabely. 

SYNTAX
return_type function_name(int count){
    if(count==0)
        return;    
    statements;
    function_name(count-1);
    }

    f(f(....f(x)))   
*/