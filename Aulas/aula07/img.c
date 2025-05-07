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

void gotoxy(int x, int y) { printf("\033[%d;%df", y, x); }

void clear() { printf("\033[2J"); }

void draw_xy(int x, int y, unsigned char r, unsigned char g, unsigned char b) {
    gotoxy(x, y);
    printf("\033[48;2;%d;%d;%dm  \033[0;00m", r, g, b);
}

int main (){
    UPixel pixel[100];
    for(int i = 0; i<20; i++){
        pixel[i].pixel = 0x18181800;
    }
    for(int i = 0; i<20; i++){
        pixel[i+20].pixel = 0xEAFF0000;
    }
    for(int i = 0; i<20; i++){
        pixel[i+40].pixel = 0x18181800;
    }
    for(int i = 0; i<20; i++){
        pixel[i+60].pixel = 0xEAFF0000;
    }
    for(int i = 0; i<20; i++){
        pixel[i+80].pixel = 0x18181800;
    }
    for(int i = 0; i<10; i++){
        pixel[10*i+1].pixel = 0x18181800;
    }
    for(int i = 0; i<10; i++){
        pixel[10*i+3].pixel = 0x18181800;
    }
    for(int i = 0; i<10; i++){
        pixel[10*i+5].pixel = 0x18181800;
    }
    for(int i = 0; i<10; i++){
        pixel[10*i+7].pixel = 0x18181800;
    }
    for(int i = 0; i<10; i++){
        pixel[10*i+9].pixel = 0x18181800;
    }
    clear();
  gotoxy(1, 1);
  printf("Imagem original\n");
  // desenha a imagem original a partir da posição (0,2)
  int xoffset = 1, yoffset = 3;
  for (int x = 0; x < 10; x++) {    
    for(int y = 0; y< 10; y++){
      draw_xy((x * 2) + xoffset, y + yoffset, (pixel[x*10 + y].canais.r),
              (pixel[x*10 + y].canais.g), (pixel[x*10 + y].canais.b));
        }
    }

}