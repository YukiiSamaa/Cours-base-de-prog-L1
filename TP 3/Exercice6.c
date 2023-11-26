//Exercice 6.1

#include <stdio.h>

int main() {
    int nbr;
    int etapes = 0;

    printf("Entrez un nombre entier positif : ");
    scanf("%d", &nbr);
    //Si nbr égal ou inf à zéro stopper le code
    if (nbr <= 0) {
        printf("Le nombre doit être un entier positif.\n");
        return 0;
    }
    //Tant que nbr diff de 1 faire soit div soit multiplication jusqu'à avoir un
    while (nbr != 1) {
        if (nbr % 2 == 0) {
            nbr = nbr / 2;
        } else {
            nbr = nbr * 3 + 1;
        }
    //Continue jusqu'a avoir un puis afficher le nombre d'étape et le numéro trouver
        etapes++;
        printf("Étape %d : résultat %d\n", etapes, nbr);
    }

    printf("La conjecture de Syracuse a atteint le nombre 1 en %d étapes.\n", etapes);

    return 0;
}


//Exercice 6.2

#include <stdio.h>

int main() {
    int nbr;
    int etapes = 0;
    int max = 0;

    printf("Entrez un nombre entier positif : ");
    scanf("%d", &nbr);
    //Si nbr égal ou inf à zéro stopper le code
    if (nbr <= 0) {
        printf("Le nombre doit être un entier positif.\n");
        return 0;
    }
    //Tant que nbr diff de 1 faire soit div soit multiplication jusqu'à avoir un
    //Avec une boucle if qui permet de trouve le nbr max
    while (nbr != 1) {
        if (nbr > max) {
            max = nbr;
        }

        if (nbr % 2 == 0) {
            nbr = nbr / 2;
        } else {
            nbr = nbr * 3 + 1;
        }
        //Continue jusqu'a avoir un puis afficher le nombre d'étape et le numéro trouver
        etapes++;
        printf("Étape %d : %d\n", etapes, nbr);
    }
    //Maintenant on affiche la conjecture et en plus la valeur max
    printf("La conjecture de Syracuse a atteint le nombre 1 en %d étapes. La valeur max est : %d\n", etapes, max);

    return 0;
}