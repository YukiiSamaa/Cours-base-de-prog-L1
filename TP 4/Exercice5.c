//Exercice 5.1

#include <stdio.h>

void afficheTriangleRectangleIsoc(int nb) {
    for (int i = 1; i <= nb; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int taille;

    printf("Entrez la taille du cote du triangle rectangle isocèle : ");
    scanf("%d", &taille);

    afficheTriangleRectangleIsoc(taille);

    return 0;
}

//Exercice 5.2

#include <stdio.h>

void afficheTriangleIsoc(int nb) {
    for (int i = 0; i < nb; i++) {
        for (int j = 0; j < nb - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int hauteur;

    printf("Entrez la hauteur du triangle isocèle : ");
    scanf("%d", &hauteur);

    afficheTriangleIsoc(hauteur);

    return 0;
}

//Exercice 5.3

#include <stdio.h>

void afficheSapin(int nb) {
    for (int i = 1; i <= nb; i++) {
        for (int j = 0; j < nb - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Tronc du sapin
    for (int i = 0; i < nb / 3; i++) {
        for (int j = 0; j < nb - 1; j++) {
            printf(" ");
        }
        printf("*\n");
    }
}

int main() {
    int hauteur;

    printf("Entrez la hauteur du sapin : ");
    scanf("%d", &hauteur);

    afficheSapin(hauteur);

    return 0;
}
