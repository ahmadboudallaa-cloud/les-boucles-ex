#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Entrez le nombre de termes pairs à afficher : ");
    scanf("%d", &n);

    printf("Approche 1 :\n");
    for (int i = 1; i <= n; i++) {
        printf("%d ", 2 * i);
    }

    printf("\n");
    return 0;
}
