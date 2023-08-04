#include<stdio.h>
#include<stdlib.h>

void preencheVetor(int *vet, int n){
    int i;
    vet[n];

    for(i=0;i<n;i++){
        scanf("%d", &vet[i]);
    }

}

void imprimeVetor(int *vet, int n){
    int i;

    for(i=0;i<n;i++){
        printf("%d ", vet[i]);
    }
}

int retornaMaiorElemento(int *vet, int n){
    int i, maior;

    for(i=0;i<n;i++){
        if(vet[i] > maior){
            maior = vet[i];
        }
    }

    printf("\n%d ", maior);
}


int main(){
    int *vet[1000], n;

    printf("n elementos:\n");
    scanf("%d", &n);

    preencheVetor(&vet, n);
    imprimeVetor(&vet, n);
    retornaMaiorElemento(&vet, n);




    return 0;
}
