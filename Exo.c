#include <stdio.h>
#include <limits.h> // Appel du header <limits.h> 

int main() {
    int number, min, max;
    min = INT_MAX; // Initialiser min au maximum possible
    max = INT_MIN; // Initialiser max au minimum possible

    printf("Entrez une suite d'entiers (finissez par 0) : ");

    // Lecture de la suite d'entiers
    while (1) {
        scanf("%d", &number);
        if (number == 0) {
            break; // Fin de la saisie
        }

        // Mettre à jour le minimum et le maximum
        if (number < min) {
            min = number;
        }
        if (number > max) {
            max = number;
        }
    }

    // Affichage du plus grand et du plus petit
    printf("Le plus grand nombre est : %d\n", max);
    printf("Le plus petit nombre est : %d\n", min);

    return 0;
}
