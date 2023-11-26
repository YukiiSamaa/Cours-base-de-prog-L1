//Exercice 1.1

#include <stdio.h>

int main()
{
//Boucle For pour init e=0 ensuite e peux allez jusque 100 et tant que la boucle n'est pas close fait incrémente plus 1
    for(int e = 0; e <= 100; e++){
        printf("%d\n", e);
    }

    return 0;
}

//Exercice 1.2

//Boucle for qui utilise un pas

#include <stdio.h>

int main()
{
    for(int e = 100; e >= 2;e -= 2){
        int carre = e * e;
        printf("Le carré de %d est : %d\n", e, carre);
    }
    return 0;
}

//Boucle while qui s'arrête seulement si il est inf ou = à 2

#include <stdio.h>

int main() {
    int i = 100;
    
    while (i >= 2) {
        int carre = i * i;
        printf("Le carré de %d est : %d\n", i, carre);
        i -= 2;
    }

    return 0;
}

//Exercice 1.3

#include <stdio.h>

int main() {
    int somme = 0;
    for (int e = 1, compteur = 0; compteur < 100 ; e += 2, compteur++) {
        somme += e;
    }

    printf("La somme des 100 premiers entiers impairs est de : %d\n", somme);

    return 0;
}


//Exercice 1.Bonus

#include <stdio.h>

int main() {
    int n;
    printf("Entrer un entier N : ");
    scanf("%d", &n);

    int somme = 0;
    int nbr = 1;
    int compteur = 0;

    while (compteur < n){
        if(nbr % 2 == 0 || nbr % 3 == 0){
            somme += nbr;
            compteur ++;
        }
        nbr ++;
    }
    printf("La somme des %d nombres premier entier divivisible par deux ou par trois et %d", nbr, somme);
    return 0;
}
//Un compteur qui compte pour additionner l'ensemble des valeurs div par 2 et 3
//somme des n premier entier/ divisible soit par deux soit par trois