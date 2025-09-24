#include <stdio.h>

int main() {
    int n, m, i, j;

    printf("Entrez la taille du vecteur : ");
    scanf("%d", &n);
    printf("Entrez le nombre de colonnes de la matrice : ");
    scanf("%d", &m);

    int v[n], M[n][m], R[m];

    // Entrée du vecteur
    printf("Entrez les éléments du vecteur :\n");
    for(i=0; i<n; i++){
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    // Entrée de la matrice
    printf("Entrez les éléments de la matrice :\n");
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &M[i][j]);
        }
    }

    // Calcul du produit vecteur x matrice (le vecteur à gauche)
    for(j=0; j<m; j++){
        R[j] = 0;
        for(i=0; i<n; i++){
            R[j] += v[i] * M[i][j];
        }
    }

    // Affichage du résultat
    printf("Le résultat du produit vecteur x matrice est :\n");
    for(j=0; j<m; j++){
        printf("%d ", R[j]);
    }
    printf("\n");
    return 0;
}
