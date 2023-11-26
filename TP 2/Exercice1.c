#include <stdio.h>

int main() {
    double nbr, val_abs;

    printf("Entrez un nombre réel : ");
    scanf("%lf", &nbr);

    // Calculer la valeur absolue on utilise l'opérateur ternaire ? qui permet de pouvoir récupérer la bonne valeur si elle est négative
    val_abs = (nbr < 0) ? -nbr : nbr;

    printf("La valeur absolue est de : %.2lf\n", val_abs);

    return 0;
}