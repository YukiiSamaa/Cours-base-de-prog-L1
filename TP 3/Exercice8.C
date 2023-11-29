//Exercice 8

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int nbrP;
    int ptsCercle = 0;
    double x, y;

    printf("Entrez le nombre de points à générer : ");
    scanf("%d", &nbrP);

    // Init du gen de nbr aléatoires avec strand
    srand(time(NULL));

    for (int i = 0; i < nbrP; i++) {
        // Génère des coordonnées aléatoires dans le carré [-1, 1] x [-1, 1]
        x = (double)rand() / RAND_MAX * 2 - 1;
        y = (double)rand() / RAND_MAX * 2 - 1;

        // Vérifie si le point est dans le quart de cercle
        if (x * x + y * y <= 1) {
            ptsCercle++;
        }
    }

    // Calcule l'approximation de π
    double Pi = 4.0 * ptsCercle / nbrP;

    printf("Approximation de π en utilisant %d points : %f\n", nbrP, Pi);

    return 0;
}
