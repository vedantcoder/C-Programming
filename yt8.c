#include<stdio.h>
#include<string.h>

void print_string(char arr[]);

int main(){
    char name[]= {'V', 'E', 'D', 'A', 'N', 'T', '\0'};
    char first_name[]= "Vedant";
    char last_name[]= "Nichal";
    char clg[]= "BITS Pilani";

    printf("Using for loop: \n");
    print_string(first_name);
    print_string(last_name);
    print_string(clg);
    printf("---------------------------\n");

    printf("Using Printf: \n");
    printf("%s\n", first_name);
    printf("%s\n", last_name);
    printf("%s\n", clg);

    char string1[100];
    printf("Enter a string: ");
    gets(string1);
    puts(string1);

    char string2[100];
    printf("Enter a string: ");
    fgets(string2, 100, stdin);
    puts(string2);

    char *string3 = "Vedant Nichal";
    puts(string3);
    string3="Vedant";
    puts(string3);

    printf("Lenght of string1: %d\n", strlen(string1));

    char string4[100];
    strcpy(string4, string3);
    puts(string4);

    puts(strcat(string1, string2));

    printf("%d\n", strcmp(string1, string2));

    return 0;
}

void print_string(char arr[]){
    for(int i=0; arr[i] != '\0';i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}

/*
STRINGS
A character array terminated by a '\0' (null character)
null character denotes string termination.

Ex. char name[]={'V', 'E', 'D', 'A', 'N', 'T', '\0'}; OR
    char name[]="VEDANT";

Print syntax
for(int i=0; arr[i] != '\0';i++){
        printf("%c", arr[i]);
    }

String format specifier(%s)
char name[]= "Vedant";
printf("%s", name);
scanf("%s", &name);

scanf cannot input multi-word strings with spaces
gets(str) or fgets(str, n, file) & puts(str) come into picture
here, file = stdin(standard input)
stops when n-1 chars input or new line is entered.

Strings are also pointers.
char *str = "Hello world" (can be reinitialized)
char str[]= "Hello world" (cannot be reinitialized)

Standard library functions (<string.h>)
1. strlen(string_name) - counts number of characters excluding '\0'
2. strcpy(newStr, oldStr) - copies value of oldStr to newStr
3. strcat(first_str, second_str) - concatenates first string with second string
4. strcmp(first_str, second_str) - compares two strings and returns a value 
    0 --> strings equal
    +ve --> first > second (ASCII)
    -ve --> first < second (ASCII)
*/