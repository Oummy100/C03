#include <stdio.h>

int main() {
    int a, b, c;

    // Lire trois entiers
    printf("Entrez trois nombres entiers : ");
    scanf("%d %d %d", &a, &b, &c);

    // Comparer pour trouver le plus grand
    if (a >= b && a >= c) {
        printf("Le plus grand nombre est : %d\n", a);
    } else if (b >= a && b >= c) {
        printf("Le plus grand nombre est : %d\n", b);
    } else {
        printf("Le plus grand nombre est : %d\n", c);
    }

    return 0;
}
