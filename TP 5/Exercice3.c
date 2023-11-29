// Exercice 3.1

#include <stdio.h>

int pIndiceMax(int t[], int taille) {
    if (taille <= 0) {
        return -1; // Retourne -1 si la taille du tableau est invalide
    }

    int indiceMax = 0; // Indice initialisé au premier élément du tableau

    for (int i = 1; i < taille; i++) {
        if (t[i] > t[indiceMax]) {
            indiceMax = i; // Met à jour l'indice du maximum trouvé
        }
    }

    return indiceMax; // Retourne l'indice du maximum dans le tableau
}

int main() {
    int taille;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    if (taille <= 0) {
        printf("La taille du tableau doit être positive et non nulle.\n");
        return 1; // Sortie avec code d'erreur
    }

    int tab[taille];

    printf("Entrez les entiers du tableau :\n");
    for (int i = 0; i < taille; i++) {
        printf("élément %d : ", i);
        scanf("%d", &tab[i]);
    }

    int indiceMaximum = pIndiceMax(tab, taille);

    if (indiceMaximum != -1) {
        printf("Le premier indice contenant la valeur maximale est : %d\n", indiceMaximum);
    } else {
        printf("Le tableau est vide ou la taille est invalide.\n");
    }

    return 0;
}


//Exercice 3.2

#include <stdio.h>

int main() {
    const int taille = 10;
    float notes[taille];
    float meilleureNote;

    // Saisie des 10 notes dans le tableau
    printf("Veuillez entrer les 10 notes :\n");
    for (int i = 0; i < taille; i++) {
        printf("Note %d : ", i + 1);
        scanf("%f", &notes[i]);
    }

    // Recherche de la meilleure note dans le tableau
    meilleureNote = notes[0]; // On initialise la meilleure note avec la première note du tableau
    for (int i = 1; i < taille; i++) {
        if (notes[i] > meilleureNote) {
            meilleureNote = notes[i];
        }
    }

    // Affichage de la meilleure note
    printf("La meilleure note saisie est : %.2f\n", meilleureNote);

    return 0;
}
