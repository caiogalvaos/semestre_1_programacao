#include<stdio.h>
#include<stdlib.h>

int main(){
    int vet[10];
    int i;
    int par = 0;

    for(i=0;i<10;i++){
        printf("Digite o %d° valor: \n", i+1);
        scanf("%d", &vet[i]);
    }

    for(i=0;i<10;i++){
        if(vet[i]%2 == 0){
           par++;
        }
    }
    printf("pares: %d ", par);
    return 0;
}
