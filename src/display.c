/*
** EPITECH PROJECT, 2019
** main
** File description:
** hunter
*/

#include "my.h"

void display(char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h') {
        my_putstr("USAGE :\n   ./my_hunter\n\n");
        my_putstr("DESCRIPTION :\n   Welcome to the game DuckHunt.\n");
        my_putstr("   The goal of the game is killing ducks enjoy.\n\n");
        my_putstr("CONTROLS :\n   Mouse and Keyboards.\n");
    }
}
