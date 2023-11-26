//Exercice 2.1

#include <stdio.h>

int main() {
    int n, nmax;
    // On rentre le 1er entier pour init le nmax pour l'utiliser en comparateur
    printf("Entrez le 1er entier : ");
    scanf("%d", &nmax);
    // Boucle for pour les 9 entiers suivant pour enregistrer les entiers et les comparer au nmax voir lequel est plus grands
    for (int i = 2; i <= 10; i++) {
        printf("Entrez le %d%s entier : ", i,"éme");
        scanf("%d", &n);

        if (n > nmax) {
            nmax = n;
        }
    }
    //Affichage du plus grand qui aurait été trouver par la boucle if qui aura comparer le n avec le nmax enregistrer
    printf("Le plus grand parmis les 10 entiers est : %d\n", nmax);

    return 0;
}

//Exercice 2.2

#include <stdio.h>

int main() {
    int n, nmax, entier;

    // Init du 1er entier en tant que nmax sauf si saisi -1 qui stop le programme
    printf("Entrez un entier (-1 = arrêt du programme) : ");
    scanf("%d", &entier);
    
    nmax = entier;

    // Boucle tant que -1 pas saisi continuer à demander un entier et faire 'la comparaison nmax/entier'
    while (entier != -1) {
        printf("Entrez un entier (-1 = arrêt du programme) : ");
        scanf("%d", &entier);

        if (entier > nmax) {
            nmax = entier;
        }
    }

    // Affiche le plus grand entier
    printf("Le plus grand entier saisi est : %d\n", nmax);

    return 0;
}
