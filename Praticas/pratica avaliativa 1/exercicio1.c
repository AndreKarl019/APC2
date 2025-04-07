#include <stdio.h>

int main(void){
    int i = 5;
    int *p;
    p = &i;
    printf("&p: %p\n",&p);
    printf("p (&i - endereço de i): %p\n", p);
    printf("*p ( i - valor de i): %d\n", *p);

//atribuir diretamente um novo valor 

    *p = 16;
    printf("*p ( i - valor de i): %d\n", *p);

// atribuir um novo valor com scanf

    printf("Insira um novo valor para i: ");
    scanf("%i",p);
    printf("*p ( i - valor de i): %d\n", *p);
    return 0;
}