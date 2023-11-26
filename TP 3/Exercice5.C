//Exercice 5

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialisation de la graine pour la génération du nombre aléatoire
    srand(time(NULL));

    int nbrMyst, val;

    // Génération d'un nombre aléatoire entre 1 et 100
    nbrMyst = rand() % 100 + 1;

    printf("Devinez le nombre mystère entre 1 et 100.\n");

    do {
        printf("Proposition d'une valeur : ");
        scanf("%d", &val);

        if (val < nbrMyst) {
            printf("Trop petit !\n");
        } else if (val > nbrMyst) {
            printf("Trop grand !\n");
        } else {
            printf("C'est gagné ! ");
        }
    } while (val != nbrMyst);

    return 0;
}
