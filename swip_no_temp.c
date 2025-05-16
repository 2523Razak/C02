#include <stdio.h> // pour scanf et printf

int main() {
    int a, b;
    // lire les deux nombres sur la même ligne
    scanf("%d %d", &a, &b);
    // échanger les valeurs sans variable temporaire
    a = a + b;
    b = a - b;
    a = a - b;
    // afficher les nouvelles valeurs
    printf("Après échange a = %d, b = %d\n", a, b);
    return 0;
}
