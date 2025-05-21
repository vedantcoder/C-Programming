#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "r");
    if(fptr == NULL){                           //checking if the file exists!
        printf("File does not exist\n");
    }

    char ch;
    ch = fgetc(fptr);
    while(ch!=EOF){
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    fclose(fptr);

    fptr = fopen("test.txt", "a");
    char ch_ = 'A';                             //Write or Append
    for(char i ='A'; i<='C'; i++){
        fputc(ch_, fptr);
        ch_++;
    }

    fclose(fptr);

    return 0;
}

/*
FILE I/O
File - Container in a storeage device to store data
Create a file
Open a file
Close a file
Read from a file
Write in a file

Text files- texttual data (.txt, .c)
Binary files- binary data (.exe, .mp3, .jpg)

FILE Pointer
FILE is a (hidden)structure that needs to be created for opening a file 
A FILE ptr that points to this structure & is used to acccess the file.
FILE *pointer_name;

Opening a file
pointer_name = fopen("filename", mode);

Closing a file
fclose(pointer_name);

File Openiing Modes:
"r" -- open to read
"rb" -- open to read in binary
"w" -- open to write
"wb" -- open to write in binary
"a" -- open to append

Reading from a file: 
char variable_name;
fscanf(pointer_name,"%c", &variable_name)

Writing in a file:
char variable_name = --value--;
fprintf(pointer_name, "%c", variable_name)

fgetc(pointer_name)
fputc('--char--', pointer_name)
fgetc returns EOF to show that the file has ended
*/