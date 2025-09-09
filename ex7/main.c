#include <stdio.h>
#include <stdlib.h>

int main() {
    int nombre, nombre_inverse = 0;

    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    int signe = 1;
    if (nombre < 0) {
        signe = -1;
        nombre = -nombre;
    }

    while (nombre != 0) {
        int chiffre = nombre % 10;
        nombre_inverse = nombre_inverse * 10 + chiffre;
        nombre = nombre / 10;
    }

    nombre_inverse *= signe;

    printf("Le nombre inversé est : %d\n", nombre_inverse);

    return 0;
}
