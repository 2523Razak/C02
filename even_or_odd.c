#include <stdio.h> // pour printf et scanf
#include <math.h>
int n,mod;// pour stocker le nombre
int main() {
    scanf("%d", &n);// on lit un nombre
    mod = n%2;
    if (mod == 0) {
        printf("%d est un nombre pair.\n", n);
    }
    if(mod != 0){
        printf("%d est un nombre impair.\n", n);
    }
    return 0; // fin du programme
}
