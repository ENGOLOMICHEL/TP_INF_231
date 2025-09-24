#include <stdio.h>

// Fonction pour trier le tableau
void trier(int t[], int n){
    int i, j, temp;
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(t[i] > t[j]){
                temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);
    int tab[n];

    printf("Entrez les éléments du tableau :\n");
    for(i=0; i<n; i++){
        scanf("%d", &tab[i]);
    }

    // Appel de la fonction de tri
    trier(tab, n);

    // Chercher la médiane
    float mediane;
    if(n % 2 == 0){
        mediane = (tab[n/2 - 1] + tab[n/2]) / 2.0;
    }else{
        mediane = tab[n/2];
    }
    printf("La médiane est : %.2f\n", mediane);
    return 0;
}
