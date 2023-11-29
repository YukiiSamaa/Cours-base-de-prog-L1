TP 1 Base de prog

Exercice 1

\n sert à sauté des lignes en C

Exercice 2

#include <stdio.h>
int main() {
 int x;
 printf("Donnez un nombre entier :");
 scanf(" %d",&x);
 printf("Vous avez choisi le nombre %d \n",x);
}

Donnez un nombre entier :10
Vous avez choisi le nombre 10 

/* Résultat donnée avec 10, int x permet de déclarer une chaine d'entier sous x pour stocker le nombres entier dans x ou autre lettre */

Exercice 3

#include <stdio.h>
int main() {
 int x,y;
 printf("Donnez deux nombres entiers :");
 scanf(" %d",&x);
 scanf(" %d",&y);
 printf("Vous avez choisi les nombres %d et %d \n",x,y);
 printf("Leur somme vaut %d \n",x+y);
}

/* Permet d'avoir deux nombres et de les additioner se qui nous affiche le résultat de l'addtion des deux nombres tout les deux stocker grace au int x,y */

Exercice 4

#include <stdio.h>
typedef char string [1024];
int main() {
 string nom;
 printf("Quel est votre nom ?");
 scanf("%s", nom);
 printf("Bonjour %s \n", nom);
} 

/* Récupere le nom donner qui sera stocker dans la var string nom et nous redonne le résultat du nom */

Exercice 5

#include <stdio.h>

typedef char string [1024];
int main() {
 string nom, prenom;
 int age;
 printf("Quel est votre nom ? ");
 scanf("%s", nom);
 printf("Quel est votre prénom ? ");
 scanf("%s", prenom);
 printf("Quel est votre âge ? ");
 scanf("%d", &age);
 printf("Bonjour %s ", nom);
 printf("%s \n", prenom);
 printf("Votre âge : %d", age + 1);
} 

Résultat

/* Quel est votre nom ? Levasseur 
Quel est votre prénom ? Thomas
Quel est votre âge ? 23
Bonjour Levasseur Thomas 
Votre âge : 24 */

/* Récupération des info avec les printf + scanf ensuite on les renvoie pour les afficher avec la contrainte du âge + 1 mis directement dans le printf*/

Exercice 6.1

#include <stdio.h>
int main () {
    int v1, v2, temp;
    
    printf("Entre la variable 1 : ");
    scanf("%d", &v1);
    printf("Entre la variable 2 : ");
    scanf("%d", &v2);
    
    printf("variable 1 = %d, Variable 2 = %d \n", v1, v2);
    
    temp = v1;
    v1 = v2;
    v2 = temp;
    
    printf("Variable 1 = %d, Variable 2 = %d", v1, v2);
    
    return 0;
}

Exercice 6.2

#include <stdio.h>

int main() {
    
    double nb1, nb2, moy;
    printf("Entrez le premier nombre : ");
    scanf("%lf", &nb1);

    printf("Entrez le deuxième nombre : ");
    scanf("%lf", &nb2);

    moy = (nb1 + nb2) / 2;

    printf("La moyenne est de : %.2lf\n", moy);

    return 0;
}

Exercice 7.1

#include <stdio.h>

int main() {
    int j, h, m, s, tps_en_s;

    printf("Entrez le nombre de jours : ");
    scanf("%d", &j);
    printf("Entrez le nombre d'heures : ");
    scanf("%d", &h);
    printf("Entrez le nombre de minutes : ");
    scanf("%d", &m);
    printf("Entrez le nombre de secondes : ");
    scanf("%d", &s);

    tps_en_s = j * 86400 + h * 3600 + m * 60 + s;

    printf("La duree en secondes est de : %d secondes\n", tps_en_s);

    return 0;
}


/* 86400 = secondes/jours, 3600 = secondes/heures, 60 secondes/minutes */

Exercice 7.2

#include <stdio.h>

int main() {
    int tps_en_s, j, h, m, s;

    printf("Entrez le temps en secondes : ");
    scanf("%d", &tps_en_s);

    j = tps_en_s / 86400;
    tps_en_s %= 86400;

    h = tps_en_s / 3600;
    tps_en_s %= 3600;

    m = tps_en_s / 60;
    tps_en_s %= 60;

    s = tps_en_s;

    printf("La duree est de : %d jours, %d heures, %d minutes, %d secondes\n", j, h, m, s);

    return 0;
}

/* Diviser le temps en seconde pour savoir les jours */

Exercice 7.3

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

    printf("La difference est de : %02d:%02d:%02d\n", diff_h, diff_m, diff_s);

    return 0;
}

Exercice 8.1

#include <stdio.h>

int main() {
    double v_lum_mps = 299792458.0;  //V lum dans le vide Metre par seconde
    double dist_terre_sol_km = 0.0;     
    double a_lum_km = 0.0;             

    double tps_terre_sol_m = 8.0 * 60 + 30.0; //Avoir le temps des 8min 30sec terre-soleil
    double tps_terre_sol_s = tps_terre_sol_m * 60.0; // Avoir le temps en secondes 

    dist_terre_sol_km = v_lum_mps * tps_terre_sol_s / 1000.0; //Calcul de la dist terre soleil en KM

    a_lum_km = dist_terre_sol_km * 365.25;  // Calcul année lum en KM 

    printf("La valeur d'une annee lumiere en kilometres est d'environ : %.2lf km\n", a_lum_km);

    return 0;
}

Résultat

// La valeur d'une annee lumiere en kilometres est d'environ : 3350675375705.70 km

Exercice 8.2

#include <stdio.h>

int main() {
    double long_pouces, long_pieds;

    printf("Entrez la longueur en pouces : ");
    scanf("%lf", &long_pouces);

    long_pieds = long_pouces / 12.0; //Diviser par 12 pour avoir la longueur en pieds 

    printf("La longueur en pieds est de : %.2lf pieds\n", long_pieds);

    return 0;
}

Exercice 8.3

#include <stdio.h>

int main() {
    double dist_terre_sol_km; 
    double dist_terre_sol_miles;  

    dist_terre_sol_km = 149597870.7;  //distance terre-soleit de 149 mil de KM

    dist_terre_sol_miles = dist_terre_sol_km * 0.6241; //faire *donnée des miles pour avoir les KM

    printf("La distance entre le Soleil et la Terre est d'environ de : %.2lf miles\n", dist_terre_sol_miles);

    return 0;
}
