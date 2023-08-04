#include<stdio.h>
#include<stdlib.h>

int main(){
    int vet[10];
    int i, num2=0, num3=0, num5=0;

    printf("Digite valores entre 0 e 9\n");
    for(i=0;i<10;i++){
        do{
            printf("Digite o %d valor:\n", i+1);
            scanf("%d", &vet[i]);
        }while(vet[i] < 0 || vet[i] > 10);
    }

    for(i=0;i<10;i++){
        switch(vet[i]){
            case 2:
                num2++;
                break;
            case 3:
                num3++;
                break;
            case 5:
                num5++;
                break;
        }
    }

    printf("quant de 2: %d quant de 3: %d quant de 5: %d", num2, num3, num5);

    return 0;
}
