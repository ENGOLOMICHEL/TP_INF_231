#include <stdio.h>

int main() {
    // Déclaration des variables
    int a, b, produit = 0;
    printf("Entrez a   ");
    scanf("%d", &a);
    printf("Entrez b  ");
    scanf("%d", &b);

    // Vérification des entrées
    if(a > 0 && b > 0){
        // Calcul du produit (multiplication par addition répétée)
        for(int i=0; i<b; i++){
            produit += a;
        }
        printf("Le produit de %d et %d est : %d\n", a, b, produit);
    }
}
