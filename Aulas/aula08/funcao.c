#include <stdio.h>

int funcao1(){
    printf("Funcao1");
    return 10;
}

int funcao2(){
    int n1 = 15;
    return n1;
}

int main(){
    printf("Hello world\n");
    printf("%X\n", funcao1);
    int *p = (int *)funcao1;
    printf("%X", p);
    printf("\n");
    funcao1();
    
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

    int n1 = 5;
    printf("n1 = %d\n", n1);
    funcao2();
    printf("n1 = %d\n", n1);

    return 0;
}