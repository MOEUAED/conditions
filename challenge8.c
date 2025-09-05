#include <stdio.h>

int main() {
    int note;

	do {
    printf("Entrez la note (0-20) : ");
    scanf("%d", &note);	
	}while (0> note || note >20);


    if (note< 10 ) {
        printf("mention echec (Recale)");
    } else if (note <12) {
        printf("mention passable");
    } else if (note <14) {
        printf("mention Assez Bien");
    } else if (note <16) {
        printf("mention bien");
    } else  {
        printf("mention tres bien");
    }

    return 0;
}

