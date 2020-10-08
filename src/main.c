/*
** EPITECH PROJECT, 2019
** main
** File description:
** hunter
*/

#include "my.h"

int main(int ac, char **av, char **env)
{
    def_t h;

    if (env[0] == NULL)
        return (84);
    if (ac == 2) {
        display(av);
        return (0);
    } else {
        gest_struct_fill(&h);
        game_loop(&h);
    }
    destroy(&h);
    return (0);
}
