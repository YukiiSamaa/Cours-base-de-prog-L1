//Exercice 2.1

#include <stdio.h>

int plusGrand (int a, int b) {
    // Vérifie le plus grand est en fonction renvoie soit a ou b grace au ? a : b pour return le bon
    return (a > b ) ? a : b;
}

int main() {
    int n1, n2;

    printf("Entrez deux entiers : ");
    scanf("%d %d", &n1, &n2);

    int resultat = plusGrand(n1, n2);

    printf("Le plus grand des deux nombres est : %d\n", resultat);

    return 0;
}

//Exercice 2.2

#include <stdio.h>

int plusPetit (int a, int b) {
    // Vérifie le plus grand est en fonction renvoie soit a ou b grace au ? a : b pour return le bon
    return (a < b ) ? a : b;
}

int main() {
    int n1, n2;

    printf("Entrez deux entiers : ");
    scanf("%d %d", &n1, &n2);

    int resultat = plusPetit(n1, n2);

    printf("Le plus petit des deux nombres est : %d\n", resultat);

    return 0;
}

//Exercice 2.3

#include <stdio.h>

//Fonction plus grand
int plusGrand (int a, int b) {
    return (a > b) ? a : b;
}

//Fonction plus petit
int plusPetit (int a, int b) {
    return (a < b) ? a : b;
}

int main () {
    int n1, n2, n3;

    //Valeurs insérer
    printf("Entrez trois entiers : ");
    scanf("%d %d %d", &n1, &n2, &n3);

    //Appel des deux fonction
    int plusGrandNbr = plusGrand (n1, plusGrand (n2, n3));
    int plusPetitNbr = plusPetit (n1, plusPetit (n2, n3));

    //Affichage du résultat
    printf("voici le nombre plus grand des trois : %d\n", plusGrandNbr);
    printf("voici le nombre plus petit des trois : %d\n", plusPetitNbr);
    
    return 0;
}

//Exercice 2.4

#include <stdio.h>

//Mise en place de la fonction
int saisirEntre (int a, int b) {
    int nbr;

    //Boucle pour saisir et vérifier que les nombres saisi soit bien dans l'intervalle
    do {
        printf("Entrez un entier entre %d et %d : ", a, b);
        scanf("%d", &nbr);

        if (nbr < a || nbr > b) {
            printf("Le nombre n'est pas dans l'intervalle spécifié.\n");
        }
    } while (nbr < a || nbr > b);

    return nbr;
}


int main() {
    int nbrMin, nbrMax;

    printf("Entrez le nombre mini : ");
    scanf("%d", &nbrMin);
    printf("Entrez la borne max : ");
    scanf("%d", &nbrMax);

    int nbrSaisi = saisirEntre(nbrMin, nbrMax);

    printf("Le nombre saisi entre %d et %d est : %d\n", nbrMin, nbrMax, nbrSaisi);

    return 0;
}

//Exercice 2.5

//Sans utilisation du tableau

#include <stdio.h>

int saisirEntre(int a, int b) {
    int nbr;

    do {
        printf("Entrez une note entre %d et %d : ", a, b);
        scanf("%d", &nbr);

        if (nbr < a || nbr > b) {
            printf("La note n'est pas dans l'intervalle spécifié.\n");
        }
    } while (nbr < a || nbr > b);

    return nbr;
}

int main() {
    int minNote, maxNote;

    printf("Saisissez 10 notes entre 0 et 20 :\n");

    // Saisie de la première note pour initialiser minNote et maxNote
    int note = saisirEntre(0, 20);
    minNote = note;
    maxNote = note;

    // Saisie des 9 notes restantes et mise à jour des valeurs minNote et maxNote
    for (int i = 1; i < 10; i++) {
        note = saisirEntre(0, 20);

        if (note < minNote) {
            minNote = note;
        }
        if (note > maxNote) {
            maxNote = note;
        }
    }

    printf("La note la plus petite est : %d\n", minNote);
    printf("La note la plus grande est : %d\n", maxNote);

    return 0;
}

//Avec utilisation du tableau

#include <stdio.h>

int saisirEntre(int a, int b) {
    int nbr;

    do {
        printf("Entrez une note entre %d et %d : ", a, b);
        scanf("%d", &nbr);

        if (nbr < a || nbr > b) {
            printf("La note n'est pas dans l'intervalle spécifié.\n");
        }
    } while (nbr < a || nbr > b);

    return nbr;
}

int main() {
    int notes[10]; //Utilisation d'un tableu pour stocker les 10 notes

    printf("Saisissez 10 notes entre 0 et 20 :\n");

    // Saisie des 10 notes
    for (int i = 0; i < 10; i++) {
        notes[i] = saisirEntre(0, 20);
    }

    // Recherche de la note la plus petite et la plus grande
    // Notes i qui vas chercher dans le tableau et prendre la valeur
    int minNote = notes[0];
    int maxNote = notes[0];

    for (int i = 1; i < 10; i++) {
        if (notes[i] < minNote) {
            minNote = notes[i];
        }
        if (notes[i] > maxNote) {
            maxNote = notes[i];
        }
    }

    printf("La note la plus petite est : %d\n", minNote);
    printf("La note la plus grande note est : %d\n", maxNote);

    return 0;
}

