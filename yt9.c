#include<stdio.h>
#include<string.h>

//Must declare it above main!
struct student{
    int roll;
    float cgpa;
    char name[100];
};

//Functions
void PrintStructures(struct student s_1);

int main(){
    struct student s1;
    s1.roll = 174;
    s1.cgpa = 8.69;
    strcpy(s1.name, "Vedant Nichal");

    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("Cgpa: %f\n", s1.cgpa);

    struct student CS[100];
    strcpy(CS[0].name, "Vedant Nichal");
    CS[0].roll = 174;
    CS[0].cgpa = 8.69;

    strcpy(CS[1].name,"Atharva Shailey");
    CS[1].roll = 10;
    CS[1].cgpa = 8.00;

    printf("Name1: %s\n", CS[1].name);

    PrintStructures(s1);
    
    return 0;
}

void PrintStructures(struct student s_1){
    printf("%s\n", s_1.name);
    printf("%d\n", s_1.roll);
    printf("%f\n", s_1.cgpa);

}

/*
STRUCTURES
A collection of values of different datatypes.

SYNTAX
struct structure_name{
    datatype1 variable_name1;
    datatype2 variable_name2;
    .
    .
    .
};
Structure is a template which will be used when creating an instance of the structure.
Creating a structure is basically like defining your own datatype and then creating instances of that datatype to store values
in variables like usual.

Initializing structures:
Declaring: struct structure_name instance_name;
Initializing: instance_name.variable_name1 = --Value--; OR
struct structure_name instance_name = {--Values--};

Array of structures: 
Definition: struct structure_name variable_name[size];
Access:     variable_name.variable_in_str = value;

Pointers to structures:
Similar to any other datatype
struct structure_name *pointer_name;
pointer_name = &instance_name
Access: (*pointer_name).variable_in_str; [(*ptr).roll] OR
        pointer_name -> variable_in_str

Passing structures to function: 
datatype function_name(struct structure_name instance_name);
Call by value!

typedef Keyword: 
Used to create alias for datatypes
typedef struct structure_name{
    datatype1 variable_name1;
    datatype2 variable_name2;
    .
    .
    .
} alias_name;
*/