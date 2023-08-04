#include <stdio.h>
#include <stdlib.h>


int main () {
    int* *mat;
    int i, j;
    int n, m;
    int maior=0;
    int menor=0;
    int l=0;

    printf ("digite as dimensoes da matriz:\n");
    scanf ("%d%d", &n, &m);

    mat = (int**) malloc (n*sizeof(int*));

    for (i=0;i<n;i++) {
        mat[i] = (int**) malloc (m*sizeof(int*));
    }


    for (i=0;i<n;i++) {
        for (j=0;j<m;j++) {
            printf ("digite o %d numero:\n", l+1);
            scanf ("%d", &mat[i][j]);
            l++;
        }
    }

    for (i=0;i<n;i++) {
        for (j=0;j<m;j++) {
            if (mat[i][j] > maior) {
                maior = mat[i][j];
            }
        }
    }

    menor = mat[0][0];

    for (i=0;i<n;i++) {
        for (j=0;j<m;j++) {
            if (mat[i][j] < menor) {
                menor = mat[i][j];
            }
        }
    }


    for (i=0;i<n;i++) {
        for (j=0;j<m;j++) {
            printf ("%d ", mat[i][j]);
        }
        printf ("\n");
    }
    printf ("%d\n", maior);
    printf ("%d", menor);



    return 0;
}
