#include <stdio.h> // Biblio entrée/sortie
#include <math.h> // Biblio pour opération maths (sqrt pour la racine carré)

int main() {

    int choix;
    printf("Choisissez le degre de l'equation :\n 1. Equation du premier degre (ax + b = 0)\n 2. Equation du second degre (ax^2 + bx + c = 0)\n");
    printf("Entrez votre choix (1 ou 2) : ");
    scanf("%d", &choix);
if (choix == 1) {

        double a, b;
        printf("Entrez les coeff a et b (avec des espaces) : ");
        scanf("%lf %lf", &a, &b);

        if (a == 0) {
            printf("L'equation n'est pas du premier degre.\n");
        } else {
            double x = -b / a;
            printf("La solution de l'équation du 1er degre est  : x = %.2lf\n", x);
        }
} else if (choix == 2){

    double a, b, c;
    printf("Entrez les coeff a, b et c (avec des espace) : ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Calcul du discriminant
    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        // Deux solutions distinctes
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Les solutions sont : solution1 = %.2lf et solution2 = %.2lf\n", x1, x2);
    } else if (discriminant == 0) {
        double x = -b / (2 * a);
        printf("La solution est unique : x = %.2lf", x);
    } else {
        // Si inf alors pas de soluce
        printf("Pas de solution réelle.");
    }
}
    return 0;
}
