//Take a string & return a sliced string from index m to n
#include<stdio.h>
#include<string.h>

void slice(char arr[], int m, int n);

int main(){
    int num1, num2;
    char array1[100];
    printf("Enter string: ")
    fgets(array1, 100, stdin);

    printf("Enter starting index: ");
    scanf("%d", &num1);
    printf("Enter ending index: ");
    scanf("%d", &num2);

    slice(array1, num1, num2);

    return 0;
}

void slice(char arr[], int m, int n){
    for(int i=m; i<=n; i++){
        printf("%c", arr[i]);
    }
}