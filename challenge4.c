#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, delta;
    float x1, x2;

    printf("Entrer le premier nombre a : ");
    scanf("%d", &a);

    printf("Entrer le deuxieme nombre b : ");
    scanf("%d", &b);

    printf("Entrer le troisieme nombre c : ");
    scanf("%d", &c);

    delta = b * b - 4 * a * c;

    if (delta > 0) {
        x1 = (-b - sqrt(delta)) / (2.0 * a);
        x2 = (-b + sqrt(delta)) / (2.0 * a);
        printf("Deux solutions reelles distinctes : \n");
        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2);
    } else if (delta == 0) {
        x1 = -b / (2.0 * a);
        printf("Une solution double : \n");
        printf("x = %f\n", x1);
    } else {
        printf("Pas de solution reelle.\n");
    }

    return 0;
}

