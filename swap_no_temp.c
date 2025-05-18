#include <stdio.h>  // Pour les fonctions scanf et printf

int main() {
    int a, b;  // Déclaration des variables à échanger

    // Lecture des deux nombres (séparés par un espace)
    scanf("%d %d", &a, &b);

    // Échange des valeurs sans variable temporaire :
    a = a + b;  // Étape 1 : a contient maintenant la somme des deux valeurs
    b = a - b;  // Étape 2 : b prend la valeur initiale de a (somme - b)
    a = a - b;  // Étape 3 : a prend la valeur initiale de b (somme - nouveau b)

    // Affichage du résultat après échange
    printf("Après échange : a = %d, b = %d\n", a, b);

    return 0;  // Fin du programme
}
