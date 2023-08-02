#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct sDisciplina{

    char nome[50];
    char codigo[50];
    int creditos;
    int carga;

}Disciplina;

typedef struct sNo{

    Disciplina Disciplina;
    struct sNo *ptrprox;

}NO;

NO* iniciar_lista(NO *lista){

    lista = NULL;
    return lista;
}

NO* alocar_No(){

    return (NO*) malloc(sizeof(NO));
}

void desalocar_No(NO* q){

    free(q);
}

int lista_vazia(NO *lista){

    if(lista == NULL){

        return 1;
    }

    return 0;
}

NO* inserir_final(NO *lista, Disciplina Disciplina){

    NO *novo;
    NO *aux;

    novo = alocar_No();

    if(novo != NULL){

        novo->Disciplina = Disciplina;
        novo->ptrprox = NULL;

        if(lista_vazia(lista)){
            lista = novo;

        }else{

            aux = lista;

            while (aux->ptrprox != NULL){

                aux = aux->ptrprox;
            }

            aux->ptrprox = novo;
        }

        return lista;

    }else{

        printf("\nErro\n.");

        return NULL;
    }
}

NO* pesquisa(NO *lista, char codigo[50]){

    NO *aux;

    if(lista_vazia(lista)){

        printf("\nLista vazia");
        getchar();

        return NULL;
    }

    aux = lista;

    while(aux != NULL){

        if(strcmp(aux->Disciplina.codigo, codigo) == 0){

            return aux;
        }

        aux = aux->ptrprox;
    }
}

void pesquisar_carga(NO *lista){

    NO *aux;
    int op = 0;
    char codigo[12] = {"sin"};

    if(!lista_vazia(lista)){

        aux = lista;

        printf("As disciplinas SIN com mais de 60 horas de carga horaria sao:\n ");

        while(aux != NULL){

            if(strcmp(aux->Disciplina.codigo, codigo) == 0 && aux->Disciplina.carga >= 60){

                printf("\nNome: %s", aux->Disciplina.nome);
                printf("\nCodigo: %s", aux->Disciplina.codigo);
                printf("\nCreditos: %d", aux->Disciplina.creditos);
                printf("\nCarga Horaria: %d", aux->Disciplina.carga);

                op++;
            }

            aux = aux->ptrprox;
            getchar();
        }

        if(op == 0){

            printf("\nDisciplina nao encontrada.");
            getchar();
        }
    }
}

NO* remover_completo(NO *lista, char codigo[50]){

    NO *aux;
    NO *q;

    if(!lista_vazia(lista)){

        if((q = pesquisa(lista, codigo)) != NULL){

            aux = lista;

            if(aux == q){

                lista = q->ptrprox;
                desalocar_No(q);

                return lista;

            }else{

                while(aux->ptrprox != q){

                    aux = aux->ptrprox;
                }

                aux->ptrprox = q->ptrprox;
                desalocar_No(q);
            }

            return lista;
        }
        return NULL;
    }
    return NULL;
}

int lista_cheia(NO *lista){

    NO *aux;
    aux = lista;

    if(lista_vazia(lista)){
        printf("\nLista esta vazia!");
        getchar();
        return 1;
    }

    while(aux->ptrprox != NULL){
        printf("\nNome: %s", aux->Disciplina.nome);
        printf("\nCodigo: %s", aux->Disciplina.codigo);
        printf("\nCarga Horaria: %d", aux->Disciplina.carga);
        printf("\nCreditos: %d", aux->Disciplina.creditos);
        printf("\n");
        aux = aux->ptrprox;
    }

    printf("\nNome: %s", aux->Disciplina.nome);
    printf("\nCodigo: %s", aux->Disciplina.codigo);
    printf("\nCarga Horaria: %d", aux->Disciplina.carga);
    printf("\nCreditos: %d", aux->Disciplina.creditos);

    getchar();
    getchar();
}

int main(){
    int opc = 0, creditos, horas;
    char nome[50], codigo[50];
    Disciplina elem;
    NO* lista;
    lista = iniciar_lista(lista);

    while(opc!=4){
        printf("1 - inserir nova disciplina:\n");
        printf("2 - Remover disciplina pelo codigo:\n");
        printf("3 - Exibir disciplinas de sistemas com mais de 60 horas:\n");
        scanf("%d", &opc);

        switch(opc){
        case 1:
            printf("Digite o nome da disciplina:\n");
            scanf("%s", elem.nome);
            fflush(stdin);
            printf("Digite o codigo da disciplina:\n");
            scanf("%s", elem.codigo);
            fflush(stdin);
            printf("Digite qual o credito da discipina:\n");
            scanf("%d", &elem.creditos);
            fflush(stdin);
            printf("Digite a carga horaria:\n");
            scanf("%d", &elem.carga);
            fflush(stdin);
            lista = inserir_final(lista, elem);
            break;
        case 2:
            printf("Digite o codigo da materia:\n");
            scanf("%s", codigo);
            lista = remover_completo(lista, codigo);
            break;
        case 3:
            pesquisar_carga(lista);
            break;
        case 4:
            printf("\nAte mais!! :)\n");
            break;
        default:
            printf("Opcao invalida! Digite outra\n");
            break;
        }

        free(lista);
    }
    return 0;
}
