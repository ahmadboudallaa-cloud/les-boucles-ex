#include <stdio.h>
#include <stdlib.h>


int main() {
    int n, i;
    int somme = 0;
    int somme_formule;


    printf("Entrez un entier positif n : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Erreur : n doit être un entier positif.\n");
        return 1;
    }


    for (i = 1; i <= n; i++) {
        somme += i;
    }

    somme_formule = n * (n + 1) / 2;


    printf("Somme des %d premiers entiers naturels (avec boucle) : %d\n", n, somme);
    printf("Somme des %d premiers entiers naturels (avec formule) : %d\n", n, somme_formule);

    return 0;
}
