#include <stdio.h>

int main() {
    int nombre, inverse = 0;

    scanf("%d", &nombre);

    int original = nombre; // On garde une copie pour l'affichage

    while (nombre != 0) {
        int chiffre = nombre % 10;        // Dernier chiffre
        inverse = inverse * 10 + chiffre; // On construit le nombre inversé
        nombre = nombre / 10;             // On enlève le dernier chiffre
    }

    printf("Nombre inversé : %d\n", inverse);
    return 0;
}
