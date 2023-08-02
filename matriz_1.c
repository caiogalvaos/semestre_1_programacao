/*Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int mat[4][4];
    int i, j;
    int maior = 0;

    for(i=0;i<4;i++){
       printf("Digite a %d° linha:\n", i+1);
        for(j=0;j<4;j++){
            printf("Digite a %d° coluna:\n", j+1);
            scanf("%d", &mat[i][j]);
            if(mat[i][j] > 10){
                maior++;
            }
        }
    }

    printf("a matriz tem %d valores maiores que 10", maior);

    return 0;
}
