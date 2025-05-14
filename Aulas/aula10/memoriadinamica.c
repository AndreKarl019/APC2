#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   int *pint = malloc(4);
   short int *psint = malloc(4);
   *pint = 5;

   psint[1] = 7;
   psint[0] = 3;

    printf("pint: %X, *pint: %d\n", pint, *pint);
    printf("psint: %X, psint+1: %X *psint: %d, *(psint+1): %d\n", psint, psint+1, *psint, *(psint+1));

    //libera memoria

    free(pint);
    free(psint);



    //exercicio b

    unsigned char *pchar = malloc(sizeof(char)*101);
    *(pchar+100) = '\0';

    for(int i = 0; i<100; i++){
        *(pchar+i) = 'A';
    }

    for(int i = 0; i<101; i++){
        printf("%c", *(pchar+i));
    }
    printf("\n");
    //exercicio c

    float *pfloat = malloc(sizeof(float)*15);
    for(int i = 0; i<15;i++){
        *(pfloat+i) = 3.01;
    }
    for(int i = 0; i<15;i++){
        printf("%.2f",*(pfloat+i));
    }
    printf("\n");

    //exercicio d

    struct pessoa_t {
        char nome[101];
        int idade;
        float salario;
    };
    
    struct pessoa_t *p_pessoa = malloc(sizeof(struct pessoa_t)*20);

    for(int i = 0; i <20; i++){
        (p_pessoa+i)->idade = 3;
        strcpy((p_pessoa+i)->nome,"BRUNO");
        (p_pessoa+i)->salario = 1000.05;
    }
    for(int i = 0; i <20; i++){
        printf("%d\n", (p_pessoa+i)->idade);
        printf("%s\n", (p_pessoa+i)->nome);
        printf("%.2f\n",(p_pessoa+i)->salario);
    }
    printf("%d",sizeof(struct pessoa_t));
    printf("\n");

    //exercicio e

    int **mat = malloc(sizeof(int*)*5);
    mat[0] = malloc(sizeof(int*)*5);
    mat[1] = malloc(sizeof(int*)*5);
    mat[2] = malloc(sizeof(int*)*5);
    mat[3] = malloc(sizeof(int*)*5);
    mat[4] = malloc(sizeof(int*)*5);
    printf("%d",sizeof(int*)*5);
    mat[2][4] = 7;
    printf("%d", mat[2][4]);

    return 0;
}
