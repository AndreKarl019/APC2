#include <stdio.h>


void modificar(int n){
    
    n = 5;
    int *p = &n;
    *(p + 11) = *p;

}


int main(){
    int n = 3;

    modificar(n);
    printf("Valor de n: %d", n);
    


    return;
}