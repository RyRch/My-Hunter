/*
** EPITECH PROJECT, 2019
** duck
** File description:
** hunter
*/

#include "my.h"

void duck(def_t *h)
{
    if (h->dep == 0 && h->sec_g > 10 && h->rect_d.top != 340
        && sfSprite_getPosition(h->dog).x > 550)
        sfSprite_move(h->duck, h->v_duck);
    if (sfSprite_getPosition(h->duck).y < -100) {
        sfSprite_setPosition(h->duck, (sfVector2f){rand() % 1200, 500});
        h->lost++;
    }
    h->time_d = sfClock_getElapsedTime(h->clock_d);
    h->sec_d = h->time_d.microseconds / 1000000.0;
    if (h->rect_d.top == 230 && h->sec_d > 0.200) {
        h->rect_d.left = h->rect_d.left + 110;
        if (h->rect_d.left >= 330)
            h->rect_d.left = 0;
        sfClock_restart(h->clock_d);
    }
}

void duck2(def_t *h)
{
    if (h->dep == 1) {
        sfMusic_stop(h->fall);
        sfMusic_stop(h->shot);
        if (sfSprite_getPosition(h->dog1).y > 325) {
            sfSprite_move(h->dog1, (sfVector2f){0, -2});
            if (sfSprite_getPosition(h->dog1).y == 346) {
                sfMusic_stop(h->success);
                sfMusic_play(h->success);
                h->dep = 2;
            }
        }
    }
}

void duck3(def_t *h)
{
    h->time_d1 = sfClock_getElapsedTime(h->clock_d1);
    h->sec_d1 = h->time_d1.microseconds / 1000000.0;

    if (h->dep == 2 && h->sec_d1 > 0.4) {
        if (sfSprite_getPosition(h->dog1).y < 400)
            sfSprite_move(h->dog1, (sfVector2f){0, 2});
        if (sfSprite_getPosition(h->dog1).y >= 400)
            h->dep = 0;
    }
}

void duck4(def_t *h)
{
    if (h->rect_d.top >= 340) {
        sfClock_restart(h->clock_d);
        if (h->sec_d > 0.3)
            h->rect_d.left = h->rect_d.left + 110;
        if (sfSprite_getPosition(h->duck).y < 500) {
            sfSprite_move(h->duck, (sfVector2f){0, 6.5});
        } else if (sfSprite_getPosition(h->duck).y >= 500) {
            sfMusic_stop(h->fall);
            sfMusic_stop(h->soundfall);
            sfMusic_play(h->soundfall);
            h->rect_d.top = 230;
            h->dep = 1;
            sfSprite_setPosition(h->duck, (sfVector2f){rand() % 1200, 515});
        }
    }
}
