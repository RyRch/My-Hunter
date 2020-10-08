/*
** EPITECH PROJECT, 2019
** main
** File description:
** hunter
*/

#include "my.h"

void destroy(def_t *h)
{
    sfSprite_destroy(h->fd);
    sfTexture_destroy(h->t_fd);
    sfMusic_destroy(h->maint);
    sfMusic_destroy(h->intro);
    sfMusic_destroy(h->dog_s);
    sfMusic_destroy(h->ding);
    sfMusic_destroy(h->shot);
    sfMusic_destroy(h->fall);
    sfMusic_destroy(h->soundfall);
    sfMusic_destroy(h->success);
    sfRenderWindow_destroy(h->window);
}
