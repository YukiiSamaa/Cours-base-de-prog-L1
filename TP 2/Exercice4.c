#include <stdio.h>

int main() {
    int categorie;
    double h, p;

    // Saisie de la catégorie pour initier le programme
    printf("Saisissez la categorie du vehicule (1, 2 ou 3) : ");
    scanf("%d", &categorie);

    // Selection de la catégorie pour indiquer le prix, en comparant si la valeur identique ou non 

    if (categorie == 1) {
        // Si cat 1 alors on demande la h de l'essieu
        printf("Saisissez la hauteur a l'essieu avant : ");
        scanf("%lf", &h);
        if (h < 1.20) {
            p = 0.50;
        } else {
            p = 0.65;
        }
    } else if (categorie == 2) {
        p = 0.75;
    } else if (categorie == 3) {
        p = 0.30;
    } else {
        // Si la catégorie n'est pas bonne indiquer et stop le programme
        printf("Categorie invalide.\n");
        return 0;
    }
    // Saisie du nombre du nombre de km avec calcul du total p*km pour afficher le résultat
    double km;
    printf("Saisissez le nombre de kilometres parcourus : ");
    scanf("%lf", &km);
    double tot = p * km;
    printf("Le prix a payer est de : %.2lf euros\n", tot);

    return 0;
}