#include <stdio.h> 

int main(){
    int x = 5;
    float pi = 3.14;

// declara ponteiro
    int *p1;
//atribui valor ao ponteiro
    p1 = &x;
//carga inicial do ponteiro na declaração
    float *p2 = &pi;

    printf("p1: %p (&x), &p1: %p\n",p1, &p1);
    printf("x: %d, &x: %p\n", x,&x);
//Leitura de dados no endereço de x: *p1
    printf("*p1: %d, p1: %p (&x)\n", *p1, p1);

// sobescreva x com ponteiro p1, para outro valor.
    *p1 = 7;
    printf("*p1: %d", *p1);




    return 0;
}