#include<stdio.h>
#include<stdlib.h>

typedef struct sNO{
    char info;
    struct sNO *dir;
    struct sNO *esq;
}NO;

void lista_iniciar(NO** lista){
    *lista = NULL;
}

NO* alocarNO(){
    return (NO*)malloc(sizeof(NO));
}

void desalocarNO(NO** q){
    free(q);
}

int lista_vazia(NO** lista){
    if(*lista = NULL){
        return 1;
    }else{
        return 0;
    }
}

void inserir_inicio(NO** lista, char elem){
    NO* novo;
    novo = alocarNO();

    if(novo != NULL){
        novo->info = elem;
        novo->esq = NULL;
        novo->dir = *lista;
        if(lista_vazia(*lista))
            (*lista)->esq = novo;
        *lista = novo;
    }else{
        printf("\nERROR: falha na alocacao do no\n");
        exit(1);
    }
}

NO* pesquisar(NO* lista, char elem){
    NO* aux;
    aux = lista;

    if(!lista_vazia(lista)){
        while(aux != NULL){
            if(aux->info = elem)
                return aux;
            aux = aux->dir;
        }
    }
}

void remover_inicio(NO** lista){
    NO* q;
    q = *lista;

    if(!lista_vazia(*lista)){
        *lista = q->dir;
        if(*lista != NULL)
            (*lista)->esq = NULL;
        desalocarNO(q);
    }else{
        printf("\nERROR: lista vazia!\n");
        exit(1);
    }
}

int remover_valor(NO** lista, char elem){
    NO* q;

    if((q = pesquisar(*lista, elem)) != NULL){
        if(*lista == q)
            remover_inicio(lista);
        else{
            (q->esq)->dir = q->dir;
            if(q->dir != NULL)
                (q->dir)->esq = q->esq;
            desalocarNO(q);
        }
        return 1;
    }
    return 0;
}

void exibir_elementos(NO** lista){
    NO* aux;
    aux = *lista;

    if(!lista_vazia(*lista)) != NULL){
        while(aux->dir != NULL){
            printf("%c ", aux->info);
            aux = aux->dir;
        }
    }else{
        printf("\nERROR: lista vazia!\n");
        exit(1);
    }
}


int main(){
    NO** lista;
    int num;
    char elem;

    lista_iniciar(**lista);
    do{
        printf("----------MENU-----------\n");
        printf("1-adicionar elemento no inicio da lista\n");
        printf("2-remover elemento da lista\n");
        printf("3-exibir elementos\n");
        printf("4-sair\n");
        printf("-------------------------\n");
        scanf("%d", &num);

        if(num == 1){
            printf("qual elemento gostaria de inserir:\n");
            scanf("%c", &elem);
            inserir_inicio(**lista, elem);
        }else if(num == 2){
            printf("qual elemento gostaria de remover?\n");
            scanf("%c", &elem);
            remover_valor(**lista, elem);
        }else if(num == 3)
            exibir_elementos(**lista);

    }while(num != 4);

    return 0;
}
