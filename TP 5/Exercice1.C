#include <stdio.h>

int main() {
    int tab[100];

    // Initialisation du tableau avec les carrés des 100 premiers nombres positifs ou nuls
    for (int i = 0; i < 100; i++) {
        tab[i] = i * i;
    }

    // Affichage des carrés des 100 premiers nombres positifs ou nuls
    for (int i = 0; i < 100; i++) {
        printf("Le carre de %d est : %d\n", i, tab[i]);
    }

    return 0;
}
