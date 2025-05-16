#include <stdio.h> // pour printf et scanf

int main() {
    int n;      // pour stocker le nombre
    int reste;  // pour stocker le reste de la division par 2
    scanf("%d", &n);       // on lit un nombre
    reste = n % 2;         // on calcule le reste de n divisé par 2
    if (reste == 0) {
        printf("%d est un nombre pair.\n", n);
    }
    if (reste != 0) {
        printf("%d est un nombre impair.\n", n);
    }
    return 0; // fin du programme
}
