#include <stdio.h>

int main() {
    int a[3], b[3], c[3], i;

    // Saisie du premier vecteur
    printf("Entrez les composantes du 1er vecteur :\n");
    for(i=0; i<3; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Saisie du deuxième vecteur
    printf("Entrez les composantes du 2ème vecteur :\n");
    for(i=0; i<3; i++){
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }

    // Calcul du produit vectoriel
    c[0] = a[1]*b[2] - a[2]*b[1];
    c[1] = a[2]*b[0] - a[0]*b[2];
    c[2] = a[0]*b[1] - a[1]*b[0];

    printf("Le produit vectoriel est : (%d, %d, %d)\n", c[0], c[1], c[2]);
    return 0;
}
