#include<stdio.h>
#include <stdlib.h>

int soma (int n ) {
    if (n==0) {
        return n;
    }
    else if (n == 1) {
        return n;
    }
    else {
     return (n-1)+(n-2);
    }
}

int main () {
    int i;
    int m;

    printf("Digite um numero:\n");
    scanf ("%d", &m);

    for (i=0;i<m;i++) {
        printf ("%d ", soma (i));
    }
    return 0;
}
