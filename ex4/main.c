#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Entrez le nombre de termes impairs à afficher : ");
    scanf("%d", &n);

    printf("Les %d premiers nombres impairs sont :\n", n);
    for (int i = 1; i <= n; i++) {
        int impair = 2 * i - 1;
        printf("%d ", impair);
    }

    printf("\n");
    return 0;
}
