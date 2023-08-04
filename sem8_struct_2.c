#include<stdio.h>
#include<stdlib.h>

typedef struct sEndereco{
    char rua[20];
    int numero;
    char cidade[20];
    char estado[3];
    int cep;
}Endereco;

int main(){
    Endereco end;

    printf("Digite o nome da rua:\n");
    gets(end.rua);
    fflush(stdin);
    printf("Digite o numero da casa:\n");
    scanf("%d", &end.numero);
    fflush(stdin);
    printf("Digite o nome da sua cidade:\n");
    gets(end.cidade);
    fflush(stdin);
    printf("Digite a sigla do seu estado:\n");
    scanf("%s", &end.estado);
    fflush(stdin);
    printf("Digite o seu cep:\n");
    scanf("%d", &end.cep);

    printf("%s %d %s %s %d", end.rua, end.numero, end.cidade, end.estado, end.cep);

    return 0;
}
