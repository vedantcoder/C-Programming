#include<stdio.h>

void draw_intersecting(void);
void draw_base(void);
void draw_triangle(void);

int main(){
    draw_triangle();
    return 0;
}

void draw_intersecing(void){
    printf("  / \\ \n");                    /* Use 2 \'s to print 1. just \ is recognised as escape in C.*/
    printf(" /   \\ \n");
    printf("/     \\ \n");
}

void draw_base(void){
    printf("-------\n");
}

void draw_triangle(void){
    draw_intersecing();
    draw_base();
}