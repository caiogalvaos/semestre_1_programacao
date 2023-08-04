#include <stdio.h>
#include <stdlib.h>

typedef struct sAluno {
    int matricula;
    char nome[20];
    int ano;
}Aluno;


int main () {
    int i, num;
    Aluno *vet;

    printf ("digite o numero de alunos:\n");
    scanf("%d", &num);

    vet = (Aluno*) malloc (num* sizeof(Aluno));

    for (i=0;i<num;i++) {
        printf ("digite a %d° matricula :\n", i+1);
        scanf ("%d", &vet[i].matricula);
        getchar();
        printf ("digite o %d° sobrenome :\n", i+1);
        gets (vet[i].nome);
        printf ("digite o %d° ano de nascimento :\n", i+1);
        scanf ("%d", &vet[i].ano);
    }

     for (i=0;i<num;i++) {
        printf ("\n%d\n", vet[i].matricula);
        printf ("%s\n", vet[i].nome);
        printf ("%d\n\n", vet[i].ano);
    }

    free (vet);


    return 0;
}
