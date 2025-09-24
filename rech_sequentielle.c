#include <stdio.h>

int main() {
    // Déclaration des variables
    int n, i, x, trouve = 0;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);
    int tab[n];

    // Saisie du tableau
    printf("Entrez les éléments du tableau :\n");
    for(i=0; i<n; i++){
        scanf("%d", &tab[i]);
    }

    // Saisie de l'élément à rechercher
    printf("Entrez la valeur à rechercher : ");
    scanf("%d", &x);

    // Recherche séquentielle
    for(i=0; i<n; i++){
        if(tab[i] == x){
            trouve = 1;
            printf("Valeur trouvée à la position %d\n", i);
            break;
        }
    }
    if(!trouve){
        printf("Valeur non trouvée.\n");
    }
    return 0;
}
