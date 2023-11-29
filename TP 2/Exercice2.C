#include <stdio.h>

int main() {
    int nb1, nb2, nb3, mnb;
    printf("Donnez vos trois nombres : ");
    scanf("%d %d %d", &nb1, &nb2, &nb3);
    
    if (nb1>nb2) {
        
        if(nb1>nb3)
            mnb=nb1;
        else
            mnb=nb3;
    }else{
        if(nb2>nb3)
            mnb=nb2;
        else
            mnb=nb3;
    };
    printf("Voici le nombres le plus grand : %d", mnb);
    
    return 0;
}
