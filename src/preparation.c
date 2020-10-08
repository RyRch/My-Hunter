/*
** EPITECH PROJECT, 2019
** preapration
** File description:
** hunter
*/

#include "my.h"

void preparation(def_t *h)
{
    sfRenderWindow_drawSprite(h->window, h->bsky, NULL);
    sfRenderWindow_drawSprite(h->window, h->tree, NULL);
    sfRenderWindow_drawSprite(h->window, h->bush, NULL);
    sfRenderWindow_drawSprite(h->window, h->duck, NULL);
    if (h->dep == 1)
        sfRenderWindow_drawSprite(h->window, h->dog1, NULL);
    sfRenderWindow_drawSprite(h->window, h->grass, NULL);
    sfRenderWindow_drawSprite(h->window, h->dog, NULL);
    sfText_setString(h->scoret, h->scores);
    h->scores = my_strdup(my_itoc(h->d_score));
    sfText_setPosition(h->scoret, (sfVector2f){960, 680});
    sfRenderWindow_drawText(h->window, h->scoret, NULL);
    if (h->lost >= 10)
        h->pause = 1;
    if (h->pause == 1) {
        sfRenderWindow_drawSprite(h->window, h->paused, NULL);
        if (h->lost >= 10)
            sfRenderWindow_drawSprite(h->window, h->go, NULL);
    }
}

void preparation2(def_t *h)
{
    if ((sfSprite_getPosition(h->dog).x) < 600)
        sfSprite_move(h->dog, (sfVector2f){2, 0 });
    if (h->secd > 0.3) {
        h->rect.left = h->rect.left + 170;
        if (h->check < 3 && h->rect.left >= 850) {
            h->rect.left = 6;
            h->check++;
        }
        if (h->check == 3 && h->rect.left >= 1360) {
            h->check++;
            sfMusic_play(h->dog_s);
        }
        if (h->check < 4)
            sfClock_restart(h->clockd);
    }
}

void gest_prepa(def_t *h)
{
    preparation(h);
    sfSprite_setTextureRect(h->dog, h->rect);
    h->timed = sfClock_getElapsedTime(h->clockd);
    h->secd = h->timed.microseconds / 1000000.0;
    if (h->pause == 0)
        preparation2(h);
}
