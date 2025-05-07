#include <stdio.h> 

typedef unsigned char uchar;

typedef struct rgba_char{
    uchar a;
    uchar b;
    uchar g;
    uchar r;
} RGBAChar;

typedef union pixel {
    unsigned int pixel;
    RGBAChar canais; // struct rgba_char canais 
} UPixel;

int main(){
    UPixel p1; // union pixel p2;
    p1.pixel = 0xAABBCCDD;
    printf("(int) pixel: %X\n", p1.pixel);
    printf("R: %X\n", p1.canais.r);
    printf("G: %X\n", p1.canais.g);
    printf("B: %X\n", p1.canais.b);
    printf("A: %X\n", p1.canais.a);
    p1.canais.g = 0xEE;
    printf("(int) pixel: %X\n", p1.pixel);
    printf("R: %X\n", p1.canais.r);
    printf("G: %X\n", p1.canais.g);
    printf("B: %X\n", p1.canais.b);
    printf("A: %X\n", p1.canais.a);
    




    return 0;
}