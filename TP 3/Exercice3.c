//Exercice 3

#include <stdio.h>

int main() {
    int n, fact = 1;
    
    printf("Entrez un nombre entier(inf ou égal à 12) pour calculer sa factorielle : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Le programme ne prend pas en compte les factorielle négatif.");
    } else if (n > 12) {
        printf("Veuillez saisir un nombre inf ou égal à 12 pour avoir une réponse.");
    } else {
        for (int i = 1; i <= n; i++) {
            fact = fact * i; 
        }

        printf("%d = %d\n", n, fact);
    }

    return 0;
}
