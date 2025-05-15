#include <stdio.h> // Pour scanf et printf

int main() {
    int v1, v2; // Déclaration des deux entiers

    // Lire deux entiers saisis sur la même ligne
    scanf("%d %d", &v1, &v2);

    // Afficher leur somme
    printf("La somme est : %d\n", v1 + v2);

    return 0; // Fin du programme
}
