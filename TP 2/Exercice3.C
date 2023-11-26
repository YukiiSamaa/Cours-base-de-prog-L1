#include <stdio.h> // Bibliothéque entrée/sortie
#include <string.h> // Bibliothéque pour les opérations sur les chaines

int main() {
    char fonction[20];

    printf("Etes-vous salarie, etudiant ou autre ? ");
    scanf("%s", fonction);

    if (strcmp(fonction, "salarie") == 0) {  // Fonction strcmp pour permettre de comparer si résultat == 0 alors chaine identique 
        printf("Vous etes un salarie.\n");
    } else if (strcmp(fonction, "etudiant") == 0) {
        printf("Vous etes un etudiant.\n");
    } else {
        printf("Vous etes autre.\n");
    }

    return 0;
}


#include <stdio.h>
#include <math.h>

int main() {
    int choix;
    printf("Choisissez le degre de l'equation :\n 1. Equation du premier degre (ax + b = 0)\n 2. Equation du second degre (ax^2 + bx + c = 0)\n");
    printf("Entrez votre choix (1 ou 2) : ");
    scanf("%d", &choix);

    if (choix == 1) {
        double a, b;
        printf("Entrez les coefficients a et b (avec des espaces) : ");
        scanf("%lf %lf", &a, &b);

        if (a == 0) {
            printf("L'equation n'est pas du premier degre.\n");
        } else {
            double x = -b / a;
            printf("La solution est : x = %.2lf\n", x);
        }
    } else if (choix == 2) {
        double a, b, c;
        printf("Entrez les coefficients a, b et c (avec des espaces) : ");
        scanf("%lf %lf %lf", &a, &b, &c);

        if (a == 0) {
            printf("L'equation n'est pas du second degre.\n");
        } else {
            double discriminant = b * b - 4 * a * c;

            if (discriminant > 0) {
                double x1 = (-b + sqrt(discriminant)) / (2 * a);
                double x2 = (-b - sqrt(discriminant)) / (2 * a);
                printf("Les solutions sont : x1 = %.2lf et x2 = %.2lf\n", x1, x2);
            } else if (discriminant == 0) {
                double x = -b / (2 * a);
                printf("La solution est unique : x = %.2lf\n", x);
            } else {
                printf("Pas de solution reelle.\n");
            }
        }
    } else {
        printf("Choix invalide.\n");
    }

    return 0;
}
