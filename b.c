#include<stdio.h>

int main(){
    int x, y, i;


     for(i=0;x != 0 || y != 0; i++){
        printf("Digite dois pontos cartesianos:\n");
        scanf("%d %d", &x, &y );


        if(x > 0 && y > 0){
            printf("1° quadrante\n");
        }else if(x < 0 && y > 0){
            printf("2° quadrante\n");
        }else if(x < 0 && y < 0){
            printf("3° quadrante\n");
        }else if(x > 0 && y < 0){
            printf("4° quadrante\n");
        }else if(x == 0){
            exit(0);
        }else if(y == 0){
            exit(0);
        }


    }
    return 0;
}
