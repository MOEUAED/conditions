#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, x1, y1, x2, y2, r;

    printf("Entrer les coordonnees du premier segment (x1 y1) : ");
    scanf("%d %d", &x1, &y1);

    printf("Entrer les coordonnees du deuxieme segment (x2 y2) : ");
    scanf("%d %d", &x2, &y2);

    printf("Entrer les coordonnees du point a tester (x y) : ");
    scanf("%d %d", &x, &y);

    r = (y - y1) * (x2 - x1) - (y2 - y1) * (x - x1);

    if(r == 0){
        if((x >= fmin(x1, x2) && x <= fmax(x1, x2)) &&
           (y >= fmin(y1, y2) && y <= fmax(y1, y2))){
            printf("Le point est sur le segment.\n");
        } else {
            printf("Le point est sur la droite mais en dehors du segment.\n");
        }
    } else {
        printf("Le point n'est pas sur la droite du segment.\n");
    }

    return 0;
}

