#include <stdio.h>  // pour printf et scanf

int main() {
    int nombre;  // déclaration d'une variable pour stocker le nombre entré

    // Demander à l'utilisateur d'entrer un entier
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);  // lecture du nombre entier

    // Vérification avec l'opérateur modulo
    if (nombre % 2 == 0) {
        // Si le reste de la division par 2 est 0, alors c'est pair
        printf("%d est un nombre pair.\n", nombre);
    } else {
        // Sinon, c'est impair
        printf("%d est un nombre impair.\n", nombre);
    }

    return 0;  // Fin du programme
}
