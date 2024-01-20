#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_sign(int n) {
    if (n < 0) {
        ft_putchar('N');
    } else {
        ft_putchar('P');
    }

    // Aller à la ligne après l'affichage du signe
    ft_putchar('\n');
}

int main() {
    // Appeler la fonction pour afficher le signe
    int nombre = -5; // Remplacez cela par l'entier que vous souhaitez tester
    ft_print_sign(nombre);

    return 0;
}
