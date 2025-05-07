#include <stdio.h>

// Passagem para valor (copia do valor passado)
void func1 (int param1, int param2){
    //altera apenas param1 internamente da func1
    param1 = 3;
}

// Passagem para Referencia (referencia da Var passada)
/*void func2(int &param1, int &param2){
    //altera ambos param1 externo e interno dessa funcao
    param1 = 3;
}*/

//Passagem por ponteiro
void func3 (int *param1, int *param2){
    //alteram ambos *p1 e o do endereço usado como parametro
    *param1 = 3;
}

int main(){
    int x = 5, y = 7;
    // Referencia (apenas em C++)
    //int &refx = x, &refy = y;
    printf("X: %d // Y: %d\n", x, y);
//passagem valor
    func1(x,y);
    printf("X: %d // Y: %d\n", x, y);
//Passagem ponteiro
    func3(&x,&y);    
    printf("X: %d // Y: %d\n", x, y);
    //passagem 




    return 0;
}