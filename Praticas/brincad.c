#include <stdio.h>
#include <math.h>

void gotoxy(int x, int y) { printf("\033[%d;%df", y, x); }

void clear() { printf("\033[2J"); }

void draw_xy(int x, int y, unsigned char r, unsigned char g, unsigned char b) {
    gotoxy(x, y);
    printf("\033[48;2;%d;%d;%dm  \033[0;00m", r, g, b);
}
  
#define R 0xff000000
#define G 0x00ff0000
#define B 0x0000ff00
#define A 0x000000ff
  
#define RGBA(r, g, b, a) (r << 24 | g << 16 | b << 8 | a)

int main(){

    int imagem[25][20];
    for(int i = 0; i<25;i++){
        for(int j = 0; j<20;j++){
            imagem[i][j] = RGBA(255,255,255,255);
        }
    }
    for(int i = 1; i<24;i++){
        imagem[i][1] = RGBA(0,0,0,255);
        for(int j = 1; j<8; j++){
            if(i==1||i==23){
                imagem[i][j] = RGBA(0,0,0,255); 
            }
            if(2<i&&i<22){
                imagem[i][j] = RGBA(0,0,0,255);
            }
            if(i!=1&&i!=23){
                imagem[i][2] = RGBA(255,255,255,255);
            }
        }
    }

    clear();
    gotoxy(3,2);
    printf("Desenho");
    int offsetx = 3, offsety = 5;
    unsigned char *pchar = (unsigned char *)imagem;
    for(int i = 0;i<25;i++){
        for(int j = 0; j<20; j++){
            draw_xy((i * 2) + offsetx, j + offsety, (imagem[i][j] & R) >> 24,
              (imagem[i][j] & G) >> 16, (imagem[i][j] & B) >> 8);
        }
    }





    return 0;
}