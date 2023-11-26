#include <stdio.h>

int main() {
    int h1, m1, s1; 
    int h2, m2, s2; 
    int diff_h, diff_m, diff_s;

    printf("Entrez l'heure du premier horaire en (hh:mm:ss) : ");
    scanf("%d:%d:%d", &h1, &m1, &s1);
    printf("Entrez l'heure du deuxieme horaire en (hh:mm:ss) : ");
    scanf("%d:%d:%d", &h2, &m2, &s2);

    diff_h = h2 - h1;
    diff_m = m2 - m1;
    diff_s = s2 - s1;

    if (diff_s < 0) {
        diff_s += 60;
        diff_m--;
    }
    if (diff_m < 0) {
        diff_m += 60;
        diff_h--;
    }
    if (diff_h < 0) {
        diff_h += 24; 
    }

    printf("La difference est de : %2d:%2d:%2d\n", diff_h, diff_m, diff_s);

    return 0;
}

