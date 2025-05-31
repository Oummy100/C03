#include <stdio.h>

int main() {
    int limite;
    int a = 0, b = 1, suivant;

    // Lire la valeur limite
    scanf("%d", &limite);

    printf("Fibonacci : ");

    // Afficher les deux premiers termes
    printf("%d %d ", a, b);

    suivant = a + b;

    while (suivant <= limite) {
        printf("%d ", suivant);
        a = b;
        b = suivant;
        suivant = a + b;
    }

    printf("\n");
    return 0;
}
