#include <stdio.h>
int main() {
    float n1, p1, n2, p2, n3, p3;
    float mp;

    printf("Digite as notas e seus respectivos pesos:\n");
    scanf("%f %f", &n1, &p1);
    scanf("%f %f", &n2, &p2);
    scanf("%f %f", &n3, &p3);

    mp = (n1*p1 + n2*p2 + n3*p3) / (p1 + p2 +p3);
    printf("A media ponderada eh: %.2f\n", mp);

return 0;
}
