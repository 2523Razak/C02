#include <stdio.h> // pour scanf et printf

int main() {
    int n;           // le nombre dont on veut le factoriel
    int i;           // variable pour la boucle
    int resultat = 1; // on commence avec 1

    scanf("%d", &n); // lire le nombre

    for (i = 1; i <= n; i++) {
        resultat = resultat * i; // on multiplie à chaque tour
    }
    printf("Le factoriel de %d est %d\n", n, resultat);

    return 0;
}
