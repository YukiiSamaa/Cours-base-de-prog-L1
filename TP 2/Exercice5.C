#include <stdio.h>

int main() {
    int a;
    // Saisissez l'année
    printf("Saisissez une annee : ");
    scanf("%d", &a);

    // Utiliser les modulo pour voir si c'est une année bissextile ou non
    if (a % 4 == 0) {
        if (a % 100 == 0) {
            if (a % 400 == 0) {
                printf("L'annee %d est bissextile.", a);
            } else {
                printf("L'annee %d n'est pas bissextile.", a);
            }
        } else {
            printf("L'annee %d est bissextile.", a);
        }
    } else {
        printf("L'annee %d n'est pas bissextile.", a);
    }

    return 0;
}
