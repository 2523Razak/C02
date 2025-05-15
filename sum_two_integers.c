#include <stdio.h> // Pour scanf et printf

int main() {
    int a, b; // Déclaration des deux entiers

    // Lire deux entiers saisis sur la même ligne
    scanf("%d %d", &a, &b);

    // Afficher leur somme
    printf("La somme est : %d\n", a + b);

    return 0; // Fin du programme
}
