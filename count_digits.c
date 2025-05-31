#include <stdio.h>

int main() {
    int nombre;
    int compteur = 0;

    scanf("%d", &nombre);

    int temp = nombre;

    // Si le nombre est 0, il a 1 chiffre
    if (nombre == 0) {
        compteur = 1;
    } else {
        while (temp != 0) {
            temp = temp / 10;  // Enlève un chiffre à droite
            compteur++;
        }
    }

    printf("%d contient %d chiffre(s).\n", nombre, compteur);

    return 0;
}
