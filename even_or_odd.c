#include <stdio.h>  // pour printf et scanf

int main() {
    int normbre
    scanf("%d",&nombre)
    // Vérification avec l'opérateur modulo
    if (nombre % 2 == 0) {
        // Si le reste de la division par 2 est 0, alors c'est pair
        printf("%d est un nombre pair.", nombre);
    } else {
        // Sinon, c'est impair
        printf("%d est un nombre impair.", nombre);
    }
    return 0;  // Fin du programme
}
