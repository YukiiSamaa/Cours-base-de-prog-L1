//Exercice 3.1

#include <stdio.h>

void afficheCaractere(char s, int nb) {
    for (int i = 0; i < nb; i++) {
        printf("%c", s);
    }
    printf("\n");
}

int main() {
    char caractere = '+';
    int nombre;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    afficheCaractere(caractere, nombre);

    return 0;
}

//Exercice 3.2

#include <stdio.h>

void afficheCarre(int nb) {
    for (int i = 0; i < nb; i++) {
        for (int j = 0; j < nb; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int taille;

    printf("Entrez la taille du cote du carre : ");
    scanf("%d", &taille);

    afficheCarre(taille);

    return 0;
}

//Exercice 3.3

#include <stdio.h>

void afficheCarreNonPlein(int nb) {
    for (int i = 1; i <= nb; i++) {
        for (int j = 1; j <= nb; j++) {
            if (i == 1 || i == nb || j == 1 || j == nb) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    int taille;

    printf("Entrez la taille du cote du carre non plein : ");
    scanf("%d", &taille);

    afficheCarreNonPlein(taille);

    return 0;
}
