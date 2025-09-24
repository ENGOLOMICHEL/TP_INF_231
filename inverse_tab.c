#include <stdio.h>

int main() {
    int n, i, temp;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);
    int tab[n];

    printf("Entrez les éléments du tableau :\n");
    for(i=0; i<n; i++){
        scanf("%d", &tab[i]);
    }

    // Inversion du tableau
    for(i=0; i<n/2; i++){
        temp = tab[i];
        tab[i] = tab[n-1-i];
        tab[n-1-i] = temp;
    }

    printf("Tableau inversé :\n");
    for(i=0; i<n; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
    return 0;
}
