#include <stdio.h>

void print_combinations() {
    for (int i = 0; i <= 7; i++) {
        for (int j = i + 1; j <= 8; j++) {
            for (int k = j + 1; k <= 9; k++) {
                printf("%d%d%d", i, j, k);

                // Ajouter une virgule et un espace sauf pour la dernière combinaison
                if (i != 7 || j != 8 || k != 9) {
                    printf(", ");
                }
            }
        }
    }

    // Aller à la ligne à la fin
    printf("\n");
}

int main() {
    // Appeler la fonction pour afficher les combinaisons
    print_combinations();

    return 0;
}
