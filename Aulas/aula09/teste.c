#include <stdio.h>

int main(){
    int a = 0, b =2;
    int *p1 = &a;
    int *p2 = (int *)&p1;
    printf("&a: %X /// %X\n", &a, p1);
    printf("&p1: %X /// %X\n", &p1, *p2);
    printf("Valor de a: %d /// %d\n", a, *p1);
    
    

    *p2++;
    *p1++;


    printf("&a: %X /// %X\n", &a, p1);
    printf("&a: %X /// %X\n", &p1, *p2);
    printf("Valor de a: %d /// %d\n", a, *p1);
    




    return 0;
}