#include <stdio.h>

int main(void){
    int n1 = 3, n2 = 5;
    // seu codigo continua aqui

    int *p1 = &n1, *p2 = &n2, temp;
    temp = n1;
    *p1 = n2;
    *p2 = temp;
    
    printf("n1: %d, n2: %d\n", n1, n2);
    return 0;
}