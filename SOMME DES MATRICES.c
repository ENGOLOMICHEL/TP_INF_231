#include <stdio.h>

int main() {
    int n, m, i, j;
    printf("Entrez le nombre de lignes et de colonnes : ");
    scanf("%d%d", &n, &m);
    int a[n][m], b[n][m], somme[n][m];
    printf("Entrez la premiere matrice :\n");
    for (i=0;i<n;i++) for (j=0;j<m;j++) scanf("%d", &a[i][j]);
    printf("Entrez la deuxieme matrice :\n");
    for (i=0;i<n;i++) for (j=0;j<m;j++) scanf("%d", &b[i][j]);
    printf("Somme des matrices :\n");
    for (i=0;i<n;i++){
        for (j=0;j<m;j++){
            somme[i][j]=a[i][j]+b[i][j];
            printf("%d ", somme[i][j]);
        }
        printf("\n");
    }
    return 0;
}
