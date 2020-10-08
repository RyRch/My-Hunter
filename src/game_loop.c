/*
** EPITECH PROJECT, 2019
** main
** File description:
** hunter
*/

#include "my.h"

void game_loop(def_t *h)
{
    sfMusic_play(h->maint);
    while (sfRenderWindow_isOpen(h->window)) {
        sfRenderWindow_setFramerateLimit(h->window, 50);
        h->time_g = sfClock_getElapsedTime(h->clock_g);
        h->sec_g = h->time_g.microseconds / 1000000.0;
        event(h);
        if (h->state == 0)
            starting_menu(h);
        else if (h->state == 1) {
            h->jell = h->pause;
            sfRenderWindow_drawSprite(h->window, h->ground, NULL);
            gest_prepa(h);
            gest_duck(h);
            cursor(h);
        }
        sfRenderWindow_display(h->window);
        sfRenderWindow_clear(h->window, sfBlack);
    }
}

void cursor(def_t *h)
{
    sfVector2f m;
    m.x = h->mouse.x - 70;
    m.y = h->mouse.y - 70;
    sfRenderWindow_setMouseCursorVisible(h->window, sfFalse);
    h->mouse = sfMouse_getPositionRenderWindow(h->window);
    sfSprite_setPosition(h->cursor, m);
    sfRenderWindow_drawSprite(h->window, h->cursor, NULL);
}

void gest_duck(def_t *h)
{
    sfSprite_setTextureRect(h->duck, h->rect_d);
    if (h->pause == 0) {
        duck(h);
        duck2(h);
        duck3(h);
        duck4(h);
    }
}
