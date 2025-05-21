#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Total arguments: %d\n", argc);
    
    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    printf("%s\n", argv[argc]);
    return 0;
}

/*
Command Line Argument - 
In C (and C++), command-line arguments allow users to pass values to your program when it's run from the terminal. 
The main() function is written like this to accept them:
    int main(int argc, char *argv[])
| Parameter | Meaning                                                                                       |
|---------- | --------------------------------------------------------------------------------------------- |
| `argc`    | **Argument Count** – total number of arguments passed, including the program name.            |
| `argv`    | **Argument Vector** – array of C strings (character pointers), each representing an argument. |

argv[0] is always the program name (can include path).
Arguments are always received as strings

Total arguments: 6
Argument 0: C:\Users\vedan\Documents\Programming\C\a.exe
Argument 1: My
Argument 2: name
Argument 3: is
Argument 4: Vedant
Argument 5: Nichal
*/