#include<stdio.h>
#include<stdlib.h>
//vet 10 posicoes
//var maior e menor
//ler valores das 10 posicoes
//criar for maior e menor
//imprimir maior e menor
int main(){
    int vet[10];
    int maior = -9999;
    int menor = 9999;
    int i;

    for(i=0;i<10;i++){
        printf("Digite o %d° valor: \n", i+1);
        scanf("%d", &vet[i]);
    }

    for(i=0;i<10;i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
        if(vet[i] < menor){
            menor = vet[i];
        }
    }

    printf("maior: %d\nmenor: %d\n", maior, menor);
    return 0;
}
