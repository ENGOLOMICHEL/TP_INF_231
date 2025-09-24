#include <stdio.h>

int main() {
    int n, i, estTrie = 1;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);
    int tab[n];

    // Saisie
    printf("Entrez les éléments du tableau :\n");
    for(i=0; i<n; i++){
        scanf("%d", &tab[i]);
    }

    // Vérification si le tableau est trié
    for(i=0; i<n-1; i++){
        if(tab[i] > tab[i+1]){
            estTrie = 0;
            break;
        }
    }

    if(estTrie)
        printf("Le tableau est trié dans l'ordre croissant\n");
    else
        printf("Le tableau n'est pas trié\n");

    return 0;
}
