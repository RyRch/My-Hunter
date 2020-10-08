/*
** EPITECH PROJECT, 2019
** main
** File description:
** hunter
*/

#include "my.h"

void gest_struct_fill(def_t *h)
{
    fill_struct1(h);
    fill_struct2(h);
    fill_struct3(h);
    fill_struct4(h);
    fill_struct5(h);
    fill_struct6(h);
}

void fill_struct1(def_t *h)
{
    h->cnt = 0;
    h->clock = sfClock_create();
    h->clock_d1 = sfClock_create();
    h->clockd = sfClock_create();
    h->clock_g = sfClock_create();
    h->clock_d = sfClock_create();
    h->mode.width = 1300;
    h->mode.height = 800;
    h->mode.bitsPerPixel = 32;
    h->tl = "DuckHunt";
    h->window = sfRenderWindow_create(h->mode, h->tl, sfResize | sfClose, NULL);
    h->t_dog = sfTexture_createFromFile("resource/dog_sheet.png", NULL);
    h->t_fd = sfTexture_createFromFile("resource/menu.png", NULL);
    h->t_icon = sfTexture_createFromFile("resource/icon.png", NULL);
    h->t_ground = sfTexture_createFromFile("resource/ground.png", NULL);
    h->t_duck = sfTexture_createFromFile("resource/duck_sheet.png", NULL);
}

void fill_struct2(def_t *h)
{
    h->t_bsky = sfTexture_createFromFile("resource/bsky.png", NULL);
    h->t_tree = sfTexture_createFromFile("resource/tree.png", NULL);
    h->t_bush = sfTexture_createFromFile("resource/piece1.png", NULL);
    h->t_grass = sfTexture_createFromFile("resource/buisson.png", NULL);
    h->t_cursor = sfTexture_createFromFile("resource/cursor.png", NULL);
    h->t_paused = sfTexture_createFromFile("resource/pause.png", NULL);
    h->t_dog1 = sfTexture_createFromFile("resource/dog1.png", NULL);
    h->t_go = sfTexture_createFromFile("resource/go.png", NULL);
    h->paused = sfSprite_create();
    h->dog1 = sfSprite_create();
    h->ground = sfSprite_create();
    h->cursor = sfSprite_create();
    h->fd = sfSprite_create();
    h->tree = sfSprite_create();
    h->bush = sfSprite_create();
    h->grass = sfSprite_create();
    h->bsky = sfSprite_create();
    h->duck = sfSprite_create();
    h->go = sfSprite_create();
}
