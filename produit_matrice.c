#include <stdio.h>

int main() {
    // Déclaration des variables
    int i, j, k, m, n, p;
    printf("Entrer le nombre de lignes de la première matrice : ");
    scanf("%d", &m);
    printf("Entrer le nombre de colonnes de la première matrice / lignes deuxième matrice : ");
    scanf("%d", &n);
    printf("Entrer le nombre de colonnes de la deuxième matrice : ");
    scanf("%d", &p);

    // Déclaration des matrices
    int A[m][n], B[n][p], C[m][p];

    // Saisie de la première matrice
    printf("Entrez les éléments de la première matrice :\n");
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    // Saisie de la deuxième matrice
    printf("Entrez les éléments de la deuxième matrice :\n");
    for(i=0; i<n; i++){
        for(j=0; j<p; j++){
            printf("B[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    // Produit des matrices
    for(i=0; i<m; i++){
        for(j=0; j<p; j++){
            C[i][j] = 0;
            for(k=0; k<n; k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Affichage du résultat
    printf("Produit des matrices :\n");
    for(i=0; i<m; i++){
        for(j=0; j<p; j++){
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
