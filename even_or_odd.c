#include <stdio.h> // Pour pouvoir utiliser scanf et printf

int main() {
    int n; // Déclare une variable pour stocker le nombre

    // Lire un nombre entier saisi par l'utilisateur
    scanf("%d", &n);

    // Vérifie si le nombre est pair (divisible par 2)
    if (n % 2 == 0) {
        printf("%d est un nombre pair.\n", n);
    } else {
        // Sinon, le nombre est impair
        printf("%d est un nombre impair.\n", n);
    }

    return 0; // Fin du programme
}
