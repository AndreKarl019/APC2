#include <stdio.h>

int main(){

    int num[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9, 10, 11, 12},
    };
    
    //exibir primeira linha:

    printf("num[0][0]: %d\n", num[0][0]);
    printf("num[0][1]: %d\n", num[0][1]);
    printf("num[0][2]: %d\n", num[0][2]);
    printf("num[0][3]: %d\n", num[0][3]);

    //exibir segunda linha:
    
    printf("num[1][0]: %d\n", num[1][0]);
    printf("num[1][1]: %d\n", num[1][1]);
    printf("num[1][2]: %d\n", num[1][2]);
    printf("num[1][3]: %d\n", num[1][3]);

    // exibir usando for

    for(int i = 0; i< 3; i++){
        for(int j = 0; j<4; j++){
            printf("num[%d][%d]: %d\n", i, j, num[i][j]);
        }
        printf(" \n", i);
    }

    // usando ponteiro 

    int *p = (int *)num;
    
    for(int i = 0; i<12; i++){
        printf("p[%d]: %d\n", i, p[i]);
    }

    return 0;
}