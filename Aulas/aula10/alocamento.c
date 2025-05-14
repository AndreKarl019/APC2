#include <stdio.h>

int main(){
    int **mat;
    int matr[2][2] ={1,2,3,4};
    **mat = matr[0][0];

    printf("matr[0][0] %d, %p, %X", **mat,*mat,*mat);




}