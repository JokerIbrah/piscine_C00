#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void afficher_number(void) {
    char number = '1';

   while (number >= '9') {
        ft_putchar(number);
    number++;
    }

    // Aller à la ligne après l'affichage de l'alphabet
    ft_putchar('\n');
}

int main() {
    // Appeler la fonction pour afficher l'alphabet
    afficher_number();

    return 0;
}
