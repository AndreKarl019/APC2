#include <stdio.h>
#include <math.h>

void func2(int *p1){
    *p1 = (-1)*(*p1);
    }

int func1(int x){
    int y = x;
    y = (-1)*y;
    return y;
}

int abs(int x){
    int y = x;
    if(y<0){
        return -y;
    }else{
        return y;
    }
}

int eVogal(char ch){
    int y = 0;
    for(int i= 97; i<123;i++){
        if(ch == i){
            y = 1;
        }
    }
    return y;
}

int eQuadrado(int x, int y){
    if(x == y*y){
        return 1;
    }else { 
        return 0;
    }
}
double obterSegundos(double horas){
    return 3600*horas;
}

double converterHoras(double horas, char formato){
    if(formato == 'h'||formato == 'H'){
        return horas;
    }else if(formato == 'm'||formato == 'M'){
        return 60*horas;
    }else if(formato == 's'||formato == 'S'){
    return 3600*horas;
    }else{
        return -1;
    }
}

void exibirMedia(int n, int *vet){
    float soma = 0;
    for(int i=0; i<n; i++){
        soma += vet[i];    
    }
    printf("a soma dos primeiros %d termos do vetor eh: %.2f\n", n, soma/n);
}

int buscarValor(int n, int *vetor, int busca){
    for(int i = 0; i<n; i++){
        if(busca==vetor[i]){
            return i;
        }
    }
    return -1;
}

void potencia(int *x, int y){
    *x = pow(*x, y);
}

void potencia2(int *x, int y){
    int resultado = *x;
    for(int i = 0; i<y-1;i++){
        resultado = resultado*(*x);
    }
    *x = resultado;
}

int preencherMatriz(int m, int n, int matriz[m][n], int valor){
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            matriz[i][j] = valor;
        }
    }
    return matriz[m][n];
}

void troclugar(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

/*void func3(int &param1){
    param1 = 3;
                    }*/


int main(){
    int x = -3, y = 9, b = 5, vetor[5]={3,4,5,6,7};
    char cha = 'a';
    int mat[4][3];


    /* 1)
            A) Procedimento não retorna valor (função void), enquanto uma função retorna um valor;

            B) Podem, o return em um procedimento cancela a execução de tudo que estiver abaixo dele (volta para a função principal);

            C) Função: 
                int func1(int x){
                    int y = x;
                    y = (-1)*y;
                    return y;
                }
               Procedimento:
                 void func2(int *p1){
                    *p1 = (-1)*(*p1);
                 }

            D) Por valor a entrada da função é o proprio valor de uma variavel: 
                Função por Valor: 
                    int func1(int x){
                        int y = x;
                        y = (-1)*y;
                        return y;
                    }
             , o por referencia é criada uma segunda variavel que compartilha a mesma região de memoria da primeira para alterar ambas simultaneamente:
                Função por Referência:
                    void func3(int &param1){
                        param1 = 3;
                    }

        2)
            a) int abs(int x){
                int y = x;
                    if(y<0){
                        return -y;
                    }  else{
                      return y;
                    }
                }

            b) int eVogal(char ch){
                    int y = 0;
                    for(int i= 97; i<123;i++){
                        if(ch == i){
                            y = 1;
                        }
                    }
                    return y;
                }

            c) int eQuadrado(int x, int y){
                    if(x == y*y){
                        return 1;
                    }else { 
                        return 0;
                    }
                }
            
            d) double obterSegundos(double horas){
                return 3600*horas;
            }
            
            e) double converterHoras(double horas, char formato){
                if(formato == 'h'||'H'){
                    return horas;
                }else if(formato == 'm'||'M'){
                    return 60*horas;
                }else if(formato == 's'||'S'){
                    return 3600*horas;
                }
                }else{
                    return -1;
                }
            }

            f) void exibirMedia(int n, int *vet){
                int soma = 0;
                for(int i=0; i<n; i++){
                    soma =+ vet[i];    
                }
                printf("a soma dos %do termos do vetor eh: %d\n", n, soma/n);
            }

            g) int buscarValor(int n, int *vetor, int busca){
                for(int i = 0, i<n; i++){
                    if(busca==vetor[i]){
                    return i;
                    }else{
                    return -1;   
                    }
                }
            }

            h) void potencia(int *x, int y){
            *x = pow(*x, y);
            } 

            ou 

            void potencia2(int *x, int y){
                int resultado = *x;
                for(int i = 0; i<y-1; i++){
                    resultado =resultado*(*x);
                }
                *x = resultado;
            }

            i) int preencherMatriz(int m, int n, int matriz[m][n], int valor){
                for(int i = 0; i<m; i++){
                    for(int j = 0; j<n; j++){
                    matriz[j][i] = valor;
                    }
                }
                    return matriz[m][n];
            } 

            j) void troclugar(int *x, int *y){
                int temp = *x;
                *x = *y;
                *y = temp;
            }

    
    
    
    
    
    
    */

    return 0;
}