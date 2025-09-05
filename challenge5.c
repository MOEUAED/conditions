#include <stdio.h>

int main() {
    double y;
    int choix;

    printf("Entrez le nombre d'annees : ");
    scanf("%lf", &y);

    printf("\nMenu de conversion :\n");
    printf("1. Conversion en mois\n");
    printf("2. Conversion en jours\n");
    printf("3. Conversion en heures\n");
    printf("4. Conversion en minutes\n");
    printf("5. Conversion en secondes\n");
    printf("6. Conversion en toute\n");
    printf("Entrez votre choix : ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            printf("%.2lf annees = %.2lf mois\n", y, y * 12);
            break;
        case 2:
            printf("%.2lf annees = %.2lf jours\n", y, y * 365);
            break;
        case 3:
            printf("%.2lf annees = %.2lf heures\n", y, y * 365 * 24);
            break;
        case 4:
            printf("%.2lf annees = %.2lf minutes\n", y, y * 365 * 24 * 60);
            break;
        case 5:
            printf("%.2lf annees = %.2lf secondes\n", y, y * 365 * 24 * 60 * 60);
            break;
        case 6:
            printf("%.2lf annees correspondent a :\n", y);
            printf("%.2lf mois\n", y * 12);
            printf("%.2lf jours\n", y * 365);
            printf("%.2lf heures\n", y * 365 * 24);
            printf("%.2lf minutes\n", y * 365 * 24 * 60);
            printf("%.2lf secondes\n", y * 365 * 24 * 60 * 60);
            break;
        default:
            printf("Choix invalide!\n");
            break;
    }

    return 0;
}

