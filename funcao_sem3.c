#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct sNO {
    char elem;
    struct sNO *ptrprox;
}NO;

NO* inicializar_lista (NO *lista) {
    lista = NULL;
    return lista;
}

NO* remover_elem(NO* lista){
    NO* aux;

    if(!lista_vazia(lista)){
        while(lista -> ptrprox != NULL){
            aux -> ptrprox = lista;
            desalocar_NO(aux);
            return lista;
            printf("removido com sucesso!\n");
        }
    }
        lista = NULL;
        return lista;
}

int lista_vazia (NO* lista) {
    if (lista == NULL) {
        return 1;
    }
    else {
        return 0;
    }
}
NO* alocar_NO () {
    NO *q;
    q = (NO*) malloc(sizeof(NO));
}
void desalocar_NO (NO *q) {
    free (q);
}
NO* inserir_elem(NO* lista, char elem){
    NO* novo;

    printf("Digite o elemento:\n");
    scanf("%c", &elem);

    novo = alocar_NO();

    if(novo != NULL){
        novo -> elem = elem;
        novo -> ptrprox = lista;
        lista = novo;
        return lista;
        printf("\n Registrado \n");
    } else{
        printf("Error \n");
        return NULL;
    }
}

void imprimir (NO* lista) {
    int i;
    for (i=0 ;lista -> ptrprox != NULL ;i++) {
        switch (lista -> elem) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf ("%d ", i);

        }
    }
}

int main () {
    NO *lista;
    char elem;
    int num;

    lista = inicializar_lista(lista);

    do {
        printf ("1 - Inserir caractere\n");
        printf ("2 - Apagar lista\n");
        printf ("3 - Imprimir\n");
        printf ("4 - Sair\n");

        scanf("%d", &num);
        fflush (stdin);

        switch (num) {
        case 1:
            inserir_elem (lista, elem);
            break;
        case 2:
            remover_elem (lista);
            break;
        case 3:
            imprimir (lista);

        }
    }
    while (con != 4);
    return 0;
}
