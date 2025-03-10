//Store 2 vectors and add

#include<stdio.h>

struct vector{
    int icap;
    int jcap;
    int kcap;
};

void addvector(struct vector v1, struct vector v2);

int main(){
    struct vector v1;
    struct vector v2;
    
    printf("Enter values for vector 1. \n");
    printf("i: ");
    scanf("%d", &v1.icap);
    printf("j: ");
    scanf("%d", &v1.jcap);
    printf("k: ");
    scanf("%d", &v1.kcap);
    printf("Vector 1 = %di + %dj + %dk\n", v1.icap, v1.jcap, v1.kcap);

    printf("Enter values for vector 2. \n");
    printf("i: ");
    scanf("%d", &v2.icap);
    printf("j: ");
    scanf("%d", &v2.jcap);
    printf("k: ");
    scanf("%d", &v2.kcap);
    printf("Vector 2 = %di + %dj + %dk\n", v2.icap, v2.jcap, v2.kcap);

    addvector(v1, v2);

    return 0;
}

void addvector(struct vector v1, struct vector v2){
    int i_cap = v1.icap + v2.icap;
    int j_cap = v1.jcap + v2.jcap;
    int k_cap = v1.kcap + v2.kcap;
    printf("Sum of 2 vectors is: %di + %dj + %dk.", i_cap, j_cap, k_cap);
}