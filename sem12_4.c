#include <stdio.h>
#include <stdlib.h>

void preenche (int *vet, int n) {

    int i;


    for (i=0;i<n;i++) {
        printf ("digite o %d numero:\n", i+1);
        scanf ("%d", &vet[i]);
    }
}

void maiorf (int *vet, int n, int maior) {
    int i;

    for (i=0;i<n;i++) {
        if (vet[i]%2 == 0) {
            if (vet[i] > maior) {
                maior = vet[i];
            }
        }
    }
}

void menorf (int *vet, int n, int menor) {
    int i;

    for (i=0;i<n;i++) {
        if (vet[i]%2 == 1) {
            menor = vet[i];
        }
    }


    for (i=0;i<n;i++) {
        if (vet[i]%2 == 1) {
            if (vet[i] < menor) {
                menor = vet[i];
            }
        }
    }
}

void mediaf (int *vet, int n, int media) {
    int i;

    for (i=0;i<n;i++) {
        media = media + vet[i];
    }

    media = media/n;

}

void imprime (int *vet, int n, int maior, int menor, int media) {
    int i;

    for (i=0;i<n;i++) {
        printf ("%d ", vet[i]);
    }
    printf ("\n%d", maior);
    printf ("\n%d", menor);
    printf ("\n%d", media);
}




int main () {

int n;
int *vet;
int i;
int maior=0, menor=0;
int media=0;


printf ("digite o valor de n:\n");
scanf ("%d", &n);


vet = (int*) malloc (n*sizeof(int));



preenche (vet, n);




maiorf (vet, n, maior);

menorf (vet, n, menor);

mediaf (vet, n, media);

imprime (vet, n, maior, menor, media);

free (vet);


    return 0;
}
