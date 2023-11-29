#include <stdio.h>

int main() {
    int n;

    // Demande à l'utilisateur de saisir une valeur entre 1 et 50
    do {
        printf("Entrez une valeur entre 1 et 50 : ");
        scanf("%d", &n);
    } while (n < 1 || n > 50);

    int tab[n];

    // Initialisation du tableau avec les n premiers nombres pairs
    for (int i = 0; i < n; i++) {
        tab[i] = 2 * (i + 1);
    }

    // Affichage des n premières cases du tableau
    printf("Les %d premiers nombres pairs sont : ", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
}
