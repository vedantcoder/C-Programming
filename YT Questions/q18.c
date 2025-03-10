//Input student info from user and enter it in file.
#include<stdio.h>

int main(){
    char name[100];
    int roll;
    float cgpa;

    printf("Enter your name: ");
    gets(name);
    printf("%s\n", name);
    printf("Enter your roll no.: ");
    scanf("%d", &roll);
    printf("%d\n", roll);
    printf("Enter your cgpa: ");
    scanf("%f", &cgpa);
    printf("%f\n", cgpa);

    FILE *fptr;
    fptr = fopen("q18.txt", "w");
    fprintf(fptr, "%s\n", name);
    fprintf(fptr, "%d\n", roll);
    fprintf(fptr, "%f\n", cgpa);
    fclose(fptr);

    return 0;
}