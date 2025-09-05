#include <stdio.h>

int main() {
    char c;

    printf("Entrez un caractere : ");
    scanf("%c", &c);

    if (c >= 65 && c <= 90) {
        printf("%c est une lettre majuscule.\n", c);
    } else {
        printf("%c n'est pas une lettre majuscule .\n", c);
    }
    return 0;
}


