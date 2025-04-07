#include <stdio.h>

int main(){

    unsigned long int inteiro_sem_sinal;
    typedef unsigned long int ulint;
    ulint int_sem_sinal;

    typedef struct pessoa Pessoa;
    struct pessoa {
        char id[32], nome[200], genero;
        int idade;
        float peso, altura;
    };

    struct pessoa pessoa1;
    Pessoa pessoa2; 
    
    int check = 1;
    printf("Insira seu nome: ");
    scanf("%s", pessoa1.nome);
    while(getchar()!='\n');
    printf("Insira sua Idade: ");
    scanf("%i", &pessoa1.idade);
    while(getchar()!='\n');
    while(check==1){
        printf("Insira seu genero: (M/F)");
        scanf("%c", &pessoa1.genero);
        while(getchar()!='\n');
        if(pessoa1.genero=='m'||pessoa1.genero=='M'||pessoa1.genero=='f'||pessoa1.genero=='F'){
            check = 0;
        }
    }
    

    // %*c -> * ignora valor scaneado, %c scaneia 1 char
    // %*x[^\n] - > ignora/le (*) x unidades e para se tiver um \n durante a leitura, se n tiver um numero ele le ate o \n



    return 0;
}



