//Salting

#include<stdio.h>

int main(){
    int arr[100];
    int i=0;
    char ch;
    while(ch!='\n'){
        if(i==2){
            arr[2]=1;
            arr[3]=2;
            arr[4]=3;
            i=5;
        }
        scanf("%c", &ch);
        arr[i]=ch;
        i++;
    }
    arr[i]='\0';

    for(int i=0; arr[i]!='\0'; i++){
        printf("%c", arr[i]);
    }
}