#include <stdio.h>
int main(){
    float n1, n2, n3;
    float ma;

    printf("Digite suas respectivas notas:\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    ma = (n1 + n2 + n3) / 3;
    printf("A sua media eh: %.2f\n", ma);

return 0;
}
