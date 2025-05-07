#include <stdio.h>

void func2(int *p1){
    *p1 = (-1)*(*p1);
    }

int func1(int x){
    int y = x;
    y = (-1)*y;
    return y;
}



int main(){
  int x = 3;
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

            D) Por valor a entrada da função é o proprio valor de uma variavel, o por referencia é criada uma segunda variavel que compartilha a mesma região de memoria da primeira para alterar ambas simultaneamente
    
    
    
    
    
    
    */
func2(&x);
printf("%d", x);


    return 0;
}