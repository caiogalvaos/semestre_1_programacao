#include <stdio.h>
#include<stdlib.h>
#include <string.h>

typedef struct sNotas{
	float p1;
	float p2;
	float p3;
	float media;
}notas;

typedef struct sAlunos{
	notas nota_;
	int matricula;
	char nome [20];

}alunos;
	alunos dados[5];
	int i;
	float med_min, med_maior, med_menor, m_p1;

	for(i=0; i<5; i++){
		printf("Digite a matricula do aluno:\n");
		scanf("%d", &dados[i].matricula);
		fflush(stdin);
		printf("Digite o nome do aluno:\n");
		gets(dados[i].nome);
		printf("Digite a nota da primeira prova:\n");
		scanf("%f", &dados[i].nota_.p1);
		printf("Digite a nota da segunda prova:\n");
		scanf("%f", &dados[i].nota_.p2);
		printf("Digite a nota da terceira prova:\n");
		scanf("%f", &dados[i].nota_.p3);
	}

	printf("\n");


	m_p1 = dados[0].nota_.p1;

	for(i=0; i<5; i++){
		if(dados[i].nota_.p1 > m_p1){
			m_p1 = dados[i].nota_.p1;
		}

	}

	for(i=0; i<5; i++){
		if(m_p1 == dados[i].nota_.p1){
			printf("%s\n", dados[i].nome);
		}
	}


	for(i=0; i<5; i++){
		dados[i].nota_.media = ((dados[i].nota_.p1 + dados[i].nota_.p2 + dados[i].nota_.p3) / 3);
	}

	med_maior = dados[0].nota_.media;

	for(i=0; i<5; i++){
		if(dados[i].nota_.media > med_maior){
			med_maior = dados[i].nota_.media;
		}
	}

	for(i=0; i<5; i++){
		if(med_maior == dados[i].nota_.media){
			printf("%s\n", dados[i].nome);
		}
	}

	med_menor = dados[0].nota_.media;

	for(i=0; i<5; i++){
		if(dados[i].nota_.media < med_menor){
			med_menor = dados[i].nota_.media;
		}
	}

	for(i=0; i<5; i++){
		if(med_menor == dados[i].nota_.media){
			printf("%s\n", dados[i].nome);
		}
	}

	med_min = 60.0;

	for(i=0; i<5; i++){
		if(dados[i].nota_.media > med_min){
			printf("Aprovado\n");
		}

		if(dados[i].nota_.media < med_min){
			printf("Reprovado\n");
		}
	}

	return 0;
}
