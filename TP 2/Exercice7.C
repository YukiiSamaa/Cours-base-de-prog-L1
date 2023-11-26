#include <stdio.h>

int main() {
    int a, b, c;
    int unique_val = 0;

    printf("Saisissez trois entiers : ");
    scanf("%d %d %d", &a, &b, &c);

    // On regarde le nombre de valeur != différent, && et 
    if (a != b && b != c && a != c) {
        unique_val = 3;
    } else if (a == b && b == c) {
        unique_val = 1;
    } else {
        unique_val = 2;
    }

    // Afficher le nombre de valeurs différentes
    printf("Nombre de valeurs différentes : %d\n", unique_val);

    // Vérifier l'ordre strict(croissant et décroissant) avec les &&=et, ||= ou sinon on dit impossible 
    if (unique_val == 3) {
        if ((a < b && b < c) || (a > b && b > c)) {
            printf("Ils sont en ordre strict.\n");
        } 
    } else {
        printf("Impossible de déterminer l'ordre se ne sont pas trois valeurs différentes.\n");
    }

    return 0;
}
