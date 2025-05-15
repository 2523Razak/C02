/* Inclusion des bibliothèques standards */
#include <stdio.h>   // Pour les fonctions d'entrée/sortie (printf, scanf)
/* Déclaration des variables globales */
int a, b;  // Deux variables entières (a et b) accessibles dans toute la fonction main()

/* Fonction principale */
int main() {
    /* Demander à l'utilisateur de saisir la valeur de a */
    printf("Entre la valeur de a : ");  // Affiche un message à l'écran
    scanf("%d" "%d", &a,&b);  // Lit un entier (%d) et le stocke à l'adresse de a (&a)
    /* Afficher le résultat de l'addition */
    printf("La somme est : %d", a + b);  // %d affiche un entier, a + b calcule la somme
    /* Fin du programme */
    return 0;  // Retourne 0 pour indiquer une exécution réussie
}
