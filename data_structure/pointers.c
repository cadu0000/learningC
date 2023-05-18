#include <stdio.h>
#include <stdlib.h>

int main(){

    int a = 10;
    int* p1 = &a;
    int** p2;

    printf("adress a= %p, value a= %d\n", &a, a);
    printf("adress p1= %p, pointer p1= %d, value p1= %p\n", &p1, *p1, p1);

    p1 = &a;
    p2 = &p1;
    a = 5;

    printf("adress a= %p, value a= %d\n", &a, a);
    printf("adress p1= %p, pointer p1= %d, value p1= %p\n", &p1, *p1, p1);
    printf("adress p2= %p, pointer p2= %p, value p2= %p\n", &p2, *p2, p2);

    return 0;
}