/*
** EPITECH PROJECT, 2019
** starting_menu
** File description:
** hunter
*/

#include "my.h"

void starting_menu(def_t *h)
{
    h->time = sfClock_getElapsedTime(h->clock);
    h->sec = h->time.microseconds / 1000000.0;
    sfRenderWindow_drawSprite(h->window, h->fd, NULL);
    sfText_setPosition(h->text, (sfVector2f){645, 657});
    sfRenderWindow_drawText(h->window, h->text, NULL);
    if (h->cnt == 1)
        sfRenderWindow_drawSprite(h->window, h->icon, NULL);
    if (h->sec > 0.3) {
        h->cnt++;
        sfClock_restart(h->clock);
        if (h->cnt == 2)
            h->cnt = 0;
    }
}
