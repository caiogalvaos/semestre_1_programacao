#include <stdio.h>
#include <stdlib.h>

typedef struct sCliente {
    char nome[20];
    int idade;
    int telefone;

}Cliente;

void preenche (Cliente *vet, int n) {
    int i;


    for (i=0;i<n;i++) {
        fflush (stdin);
        printf ("digite o nome:\n");
        gets (vet[i].nome);
        fflush (stdin);
        printf ("digite a idade:\n");
        scanf("%d", &vet[i].idade);
        printf ("digite o telefone:\n");
        scanf ("%d", &vet[i].telefone);
    }
}

void imprime (Cliente *vet, int n) {
    int i;

    for (i=0;i<n;i++) {
        printf ("\n%s\n", vet[i].nome);
        printf ("%d\n", vet[i].idade);
        printf ("%d\n", vet[i].telefone);

    }

}


int main () {

    int n;
    Cliente *vet;

    printf ("digite a quantidade de clientes:\n");
    scanf ("%d", &n);

    vet = (Cliente*) malloc (n*sizeof(Cliente));

    preenche (vet, n);

    imprime (vet, n);

    free (vet);

    return 0;
}
