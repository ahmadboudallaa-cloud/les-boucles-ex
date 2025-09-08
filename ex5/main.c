#include <stdio.h>
#include <stdlib.h>

int main() {
    double base, resultat = 1.0;
    int exposant;
    printf("Entrez la base : ");
    scanf("%lf", &base);

    printf("Entrez l'exposant (entier) : ");
    scanf("%d", &exposant);
    int exposant_initial = exposant;

    if (exposant < 0) {
        exposant = -exposant;
        for (int i = 0; i < exposant; i++) {
            resultat *= base;
        }
        resultat = 1.0 / resultat;
    } else {
        for (int i = 0; i < exposant; i++) {
            resultat *= base;
        }
    }

    printf("%.2lf ^ %d = %.6lf\n", base, exposant_initial, resultat);

    return 0;
}

