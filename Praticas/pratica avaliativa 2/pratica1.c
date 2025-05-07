#include <stdio.h>

void fun1 (void){
    printf("***\n");
}
void fun2 (void){
    printf("*****\n");
}
void fun3 (void){
    printf("*******\n");
}

void funx(int x){
    for(int i = 0; i<x; i++){
        printf("*");
    }
    printf("\n");
}
void funxy(int x, char y){
    for(int i = 0; i<x; i++){
        printf("%c", y);
    }
    printf("\n");
}

int main(){
    
    fun1();
    fun2();
    fun3();
    fun2();
    fun1();
    printf("\n");
    printf("\n");

    printf("forma 2: \n\n");
    funx(3);
    funx(5);
    funx(7);
    funx(5);
    funx(3); 
    printf("\n");
    printf("\n");

    printf("forma 3: \n\n");
    funxy(3, '@');
    funxy(5, '#');
    funxy(7, '%');
    funxy(5, '#');
    funxy(3, '@');





    return 0;
}