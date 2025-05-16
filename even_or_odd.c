#include <stdio.h> // Pour utiliser scanf et printf

int main() {
    int n; // Déclare une variable pour stocker le nombre

    // Lire un entier saisi par l'utilisateur
    scanf("%d", &n);

    // Vérifie si le nombre est divisible par 2 (donc pair)
    if (n % 2 == 0) {
        printf("%d est un nombre pair.\n", n);
    }

    // Vérifie si le nombre n'est pas divisible par 2 (donc impair)
    if (n % 2 != 0) {
        printf("%d est un nombre impair.\n", n);
    }

    return 0; // Fin du programme
}
