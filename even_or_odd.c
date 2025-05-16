#include <stdio.h> // Pour scanf et printf

int main() {
    int n; // Déclaration de la variable

    // Lire un entier saisi par l'utilisateur
    scanf("%d", &n);

    // Vérifier si le nombre est divisible par 2
    if (n % 2 == 0) {
        printf("%d est un nombre pair.\n", n);
    } else {
        printf("%d est un nombre impair.\n", n);
    }

    return 0;
}
