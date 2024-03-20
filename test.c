#include <stdlib.h>

int main() {
    // Allocation de mémoire sans libération
    int *p = (int *)malloc(sizeof(int));
    *p = 10; // Utilisation de la mémoire allouée

    // Ici, nous "oublions" de libérer la mémoire allouée à p avant la fin du programme
    // free(p); // Ceci aurait libéré la mémoire

    return 0;
}

