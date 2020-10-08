/*
** EPITECH PROJECT, 2019
** main
** File description:
** hunter
*/

#include "my.h"

void event(def_t *h)
{
    while (sfRenderWindow_pollEvent(h->window, &h->event)) {
        if (h->event.type == sfEvtClosed)
            sfRenderWindow_close(h->window);
        if (h->state == 0 && sfKeyboard_isKeyPressed(sfKeyDown))
            sfSprite_setPosition(h->icon, (sfVector2f){350, 527 + 40});
        if (h->state == 0 && sfKeyboard_isKeyPressed(sfKeyUp))
            sfSprite_setPosition(h->icon, (sfVector2f){350, 527});
        if (h->sec_g > 1 && h->state == 0
            && sfKeyboard_isKeyPressed(sfKeyReturn)) {
            sfMusic_stop(h->maint);
            sfMusic_play(h->intro);
            h->state = 1;
        }
        pause_event(h);
        killer(h);
    }
}

void pause_event(def_t *h)
{
    if (h->state == 1 && sfKeyboard_isKeyPressed(sfKeySpace)) {
        if (h->pause == 0 && h->jell == 0) {
            h->pause = 1;
            sfMusic_stop(h->intro);
            sfMusic_play(h->ding);
        } else if (h->jell == 1) {
            h->pause = 0;
            sfMusic_stop(h->ding);
        }
    }
}

void killer(def_t *h)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        sfRenderWindow_close(h->window);
    if (h->rect_d.top != 340
        && h->event.type == sfEvtMouseButtonPressed && h->pause == 0) {
        sfVector2i mouse = sfMouse_getPositionRenderWindow(h->window);
        int posx = sfSprite_getPosition(h->duck).x;
        int posy = sfSprite_getPosition(h->duck).y;
        if (mouse.x >= posx && mouse.y >= posy
            && mouse.y <= posy + 110 && mouse.x <= posx + 110) {
            h->v_duck.y = h->v_duck.y - 0.25;
            kill2(h);
        }
    }
}

void kill2(def_t *h)
{
    h->dep = 0;
    sfMusic_stop(h->shot);
    sfMusic_play(h->shot);
    sfMusic_stop(h->fall);
    sfMusic_play(h->fall);
    if (h->rect_d.left == 0)
        h->d_score = h->d_score + 1000;
    if (h->rect_d.left > 0)
        h->d_score = h->d_score + 500;
    h->rect_d.top = 340;
}
