#include <stdio.h>

int main(){
    int *p, num = 5;
    int n1 = 1, n2 = 2, n3 = 3, n4 = 4, n5 = 5;
    printf("n1: %u,n2: %u,n3: %u,n4: %u,n5: %u\n", &n1, &n2, &n3, &n4, &n5);
    p = &n3;
    
    printf("num: %d, num: %d\n", *p, p[0]);
    p++;
    printf("num: %d, num: %d\n", *p, p[0]);
    return 0;
}