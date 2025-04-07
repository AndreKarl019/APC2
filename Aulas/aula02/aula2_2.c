#include <stdio.H>

int main(){
    int n = 1025;
    char *p_c;
    p_c = (char *) &n;
    printf("%d, p_c[0]: %d \n",*(p_c+0), p_c[0]);
    //p_c++; = *(p_c+1)
    printf("%d, p_c[1]: %d \n",*(p_c+1),p_c[1]);
    printf("%d, p_c[1]: %d \n",*(p_c+2),p_c[2]);
    printf("%d, p_c[1]: %d \n",*(p_c+3),p_c[3]);

    return 0;
}