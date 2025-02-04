#include<stdio.h>
#include<math.h>        //inclding math.h for mathematical functions like pow(x,y)
int main(){
    int a = 22;
    int b = a;
    int c = b * 6;
    int d = 1, e;

    int OldAge=22;
    int years = 1;
    int NewAge = OldAge + years;

    int x,y,z;                  //int x=y=z=4 cannot be used. 
    x=y=z=5;

    int sum = x+y;              //single variable in lhs
    int product = x*y;              // + - * / %        pow(x,y)= x^y// ^ is XOR Operator!!
    
    int m = pow(x,y);
    printf("%d\n",m);

    int r = (int) 1.9999999;            //explicit conversion of double to int. r=1 not round off. decimals omitted completely
    printf("%d\n", r);

    //Divisibility by 2
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d", num%2==0);
    return 0;
}

/*
OPERATORS
int + int = int
int + float = float
float + float = float

Operator Precedence:-
1. !
2. * / %
3. + -
4. < <= >= >
5. == !=
6. &&
7. ||
8. =
Left to right for same precedence!

Control Instructions
1. Sequence Control (usual)
2. Decision Control (if,else)
3. Loop Control (for,while, do while)
4. Case Control (decision)

Operators
1. Arithment + - * / %
2. Relational == > < >= <= !=
3. Logical &&(and) ||(or) !(not)
4. Asignment = += -= *= /= %=


*/