//Exercice 4

#include <stdio.h>

int main() {
    int min, max, val;
    int result = 0;

    while (!result){
        printf("Entrez la valeur mini de l'intervalle : ");
        scanf("%d", &min);
        printf("Entrez la valeur maxi de l'intervalle : ");
        scanf("%d", &max);

        if (min > max) {
            printf("La valeur mini ne peut pas être supérieure à la valeur maxi, veuillez réessayer.\n");
        }else{
            result = 1;
        }
    }
    //Si condition bonne faire la suite du programme sinon fin programme
    //Do-While permet de vérifier la condition et de redemander si elle n'est pas rempli et de le faire jusqu'à se que la condition soit remplie
    do {
        printf("Entrez un entier entre %d et %d : ", min, max);
        scanf("%d", &val);

        if (val < min || val > max) {
            printf("La valeur n'est pas dans l'intervalle spécifié.");
        }
    } while (val < min || val > max);

    printf("La valeur saisie %d est dans l'intervalle [%d, %d].", val, min, max);

    return 0;
    
}
