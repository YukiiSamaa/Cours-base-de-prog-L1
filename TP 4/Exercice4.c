//Exercice 4.1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lanceBoule(int sommeMisee, int numeroChoisi) {
    srand(time(NULL)); // Initialisation de la graine pour rand()

    int nbrGagnant = rand() % 37; // Génère un nombre aléatoire entre 0 et 36

    printf("Le numero gagnant est : %d\n", nbrGagnant);

    if (nbrGagnant == numeroChoisi) {
        return sommeMisee * 35; // Si le numéro gagnant correspond au numéro choisi, on gagne 35 fois la somme misée
    } else {
        return 0; // Sinon, on ne gagne rien
    }
}

int main() {
    int sommeMisee, nbrChoisi, gain;

    printf("Entrez la somme misee : ");
    scanf("%d", &sommeMisee);
    printf("Entrez le numero choisi (entre 0 et 36) : ");
    scanf("%d", &nbrChoisi);

    gain = lanceBoule(sommeMisee, nbrChoisi);

    printf("Le gain obtenu est : %d\n", gain);

    return 0;
}

//Exercice 4.2

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lanceBoule(int sommeMisee, int numeroChoisi) {
    srand(time(NULL)); // Initialisation de la graine pour rand()

    int numeroGagnant = rand() % 37; // Génère un nombre aléatoire entre 0 et 36

    printf("Le numero gagnant est : %d\n", numeroGagnant);

    if (numeroGagnant == numeroChoisi) {
        return sommeMisee * 35; // Si le numéro gagnant correspond au numéro choisi, on gagne 35 fois la somme misée
    } else {
        return 0; // Sinon, on ne gagne rien
    }
}

int main() {
    int sommeInitiale, sommeTotale, sommeMisee, nbrChoisi, gain;
    char continuer;

    printf("Entrez votre somme initiale : ");
    scanf("%d", &sommeInitiale);

    sommeTotale = sommeInitiale;

    do {
        printf("Somme actuelle : %d\n", sommeTotale);

        if (sommeTotale <= 0) {
            printf("Vous n'avez plus d'argent. Fin du jeu.\n");
            break;
        }

        printf("Entrez la somme a miser : ");
        scanf("%d", &sommeMisee);
        printf("Entrez le numero choisi (entre 0 et 36) : ");
        scanf("%d", &nbrChoisi);

        gain = lanceBoule(sommeMisee, nbrChoisi);
        sommeTotale += gain - sommeMisee; // Calcul de la nouvelle somme totale

        printf("Votre gain est de : %d\n", gain);
        
        if (sommeTotale > 0) {
            printf("Voulez-vous continuer ? (O/N) ");
            scanf(" %c", &continuer);
        }
    } while (sommeTotale > 0 && (continuer == 'O' || continuer == 'o'));

    printf("Votre somme finale est : %d\n", sommeTotale);

    return 0;
}
