#include <stdio.h>

int main() {
    int n = 0;

    scanf("%d", &n); // Lit un entier entré par l'utilisateur
    
    if (nombre % 2 == 0) { // Vérifie si le nombre est divisible par 2
        printf("%d est pair.\n", n); // Affiche "pair" si vrai
    } else {
        printf("%d est impair.\n", n); // Affiche "impair" sinon
    }
    return 0;
}
// Programme qui vérifie si un nombre est pair ou impair.
