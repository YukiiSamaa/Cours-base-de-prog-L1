//Exercice 1.1

#include <stdio.h>
#include <math.h>

//Fonction pour le calcul de la diago
double longueurDiagonaleRectangle(double lon, double lar) {
    double d = lon * lon + lar * lar;
    d = sqrt(d);
    return d;
}

int main() {
    double lo, la, ld;

    printf("Quelles sont les longueur et largeur du rectangle ? ");
    scanf("%lf %lf", &lo, &la);

    //Appel de la fonction pour les valeurs ayant été rentrée
    ld = longueurDiagonaleRectangle(lo, la);

    printf("La longueur de la diagonale est : %lf\n", ld);

    return 0;
}

//Exercice 1.2

#include <stdio.h>
#include <math.h>

//Fonction pour le calcul de la diago
double longueurDiagonaleRectangle(double lon, double lar) {
    double d = lon * lon + lar * lar;
    d = sqrt(d);
    return d;
}

//Fonction pour le calcul du périmetre
double perimetreRectangle (double lon, double lar) {
    return 2 * (lon + lar);
}

int main() {
    double lo, la, ld, pr;

    printf("Quelles sont les longueur et largeur du rectangle ? ");
    scanf("%lf %lf", &lo, &la);

    //Appel des fonction pour les valeurs ayant été rentrée
    ld = longueurDiagonaleRectangle(lo, la);
    pr = perimetreRectangle(lo, la);

    printf("La longueur de la diagonale est : %lf\n", ld);
    printf("La longueur du perimetre est : %lf\n", pr);

    return 0;
}
