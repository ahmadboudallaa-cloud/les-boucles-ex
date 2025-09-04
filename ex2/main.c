#include <stdio.h>
#include <stdlib.h>


int main() {
    int n, i;
    long factorielle = 1;
    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Erreur : la factorielle n'est définie que pour les entiers positifs.\n");
    } else {
        for (i = 1; i <= n; i++) {
            factorielle *= i;
        }

        printf("%d! = %llu\n", n, factorielle);
    }

    return 0;
}
