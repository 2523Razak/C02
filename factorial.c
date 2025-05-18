#include <stdio.h>  // Pour scanf et printf

int main() {
    int n = 0;       // Le nombre entré par l'utilisateur
    int resultat = 1; // Pour stocker le factoriel (initialisé à 1)

    scanf("%d", &n); // Lire le nombre

    for (int i = 1; i <= n; i++) {
        resultat *= i; // Calculer le factoriel (équivalent à resultat = resultat * i)
    }

    printf("Le factoriel de %d est : %d\n", n, resultat); // Afficher le résultat

    return 0;
}
// Ce programme calcule et affiche le factoriel d'un nombre entier
