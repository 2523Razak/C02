#include <stdio.h>

int main() {
    int n = 0;
    int i = 1;
    int resultat = 1;

    scanf("%d", &n); // lire un entier

    // boucle pour calculer le factoriel
    for (i = 1; i <= n; i++) {
        resultat = resultat * i;
    }

    // afficher le résultat
    printf("Le factoriel de %d est %d\n", n, resultat);

    return 0;
}
// C'est un programme qui lit un entier et affiche son factoriel avec une boucle
