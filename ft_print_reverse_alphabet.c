#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void afficher_alphabet(void) {
    char lettre = 'z';

   while (lettre >= 'a') {
        ft_putchar(lettre);
        lettre--;
    }

    // Aller à la ligne après l'affichage de l'alphabet
    ft_putchar('\n');
}

int main() {
    // Appeler la fonction pour afficher l'alphabet
    afficher_alphabet();

    return 0;
}
