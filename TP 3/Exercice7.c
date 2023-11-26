//Exercice 7.1

#include <stdio.h>

int main() {
    int nombre = 7;
    int limite = 10;

    printf("Table de multiplication de 7 :\n");

    for (int i = 1; i <= limite; i++) {
        printf("%d x %d = %d\n", nombre, i, nombre * i);
    }

    return 0;
}

//Exercice 7.2

#include <stdio.h>

int main() {
    int chiffre, lim;

    printf("Entrez le chiffre de la table que vous voulez : ");
    scanf("%d", &chiffre);

    if (chiffre < 0 || chiffre > 9) {
        printf("Le chiffre doit être compris entre 0 et 9.");
        return 0;
    }

    printf("Entrez la limite voulu pour la table de multiplication (ex: 10 pour la table jusqu'a 10) : ");
    scanf("%d", &lim);

    printf("Table de multiplication de %d :\n", chiffre);
    for (int i = 1; i <= lim; i++) {
        printf("%d x %d = %d\n", chiffre, i, chiffre * i);
    }

    return 0;
}

