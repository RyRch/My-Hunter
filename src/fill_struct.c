/*
** EPITECH PROJECT, 2019
** main
** File description:
** hunter
*/

#include "my.h"

void fill_struct3(def_t *h)
{
    h->icon = sfSprite_create();
    h->dog = sfSprite_create();
    h->font = sfFont_createFromFile("resource/duckhunt.ttf");
    h->scoref = sfFont_createFromFile("resource/duckhunt.ttf");
    h->text = sfText_create();
    h->scoret = sfText_create();
    h->vert.r = 100;
    h->vert.g = 255;
    h->vert.b = 70;
    h->vert.a = 255;
    h->scores = NULL;
    sfText_setColor(h->text, h->vert);
    sfText_setString(h->text, "12000");
    sfText_setFont(h->text, h->font);
    sfText_setFont(h->scoret, h->scoref);
    sfText_setCharacterSize(h->text, 25);
}

void fill_struct4(def_t *h)
{
    sfText_setCharacterSize(h->scoret, 35);
    sfSprite_setTexture(h->dog1, h->t_dog1, sfTrue);
    sfSprite_setTexture(h->cursor, h->t_cursor, sfTrue);
    sfSprite_setTexture(h->icon, h->t_icon, sfTrue);
    sfSprite_setTexture(h->dog, h->t_dog, sfTrue);
    sfSprite_setTexture(h->ground, h->t_ground, sfTrue);
    sfSprite_setTexture(h->fd, h->t_fd, sfTrue);
    sfSprite_setTexture(h->duck, h->t_duck, sfTrue);
    sfSprite_setTexture(h->bsky, h->t_bsky, sfTrue);
    sfSprite_setTexture(h->tree, h->t_tree, sfTrue);
    sfSprite_setTexture(h->grass, h->t_grass, sfTrue);
    sfSprite_setTexture(h->bush, h->t_bush, sfTrue);
    sfSprite_setTexture(h->paused, h->t_paused, sfTrue);
    sfSprite_setTexture(h->go, h->t_go, sfTrue);
    h->maint = sfMusic_createFromFile("resource/main.ogg");
    h->intro = sfMusic_createFromFile("resource/intro.ogg");
    h->dog_s = sfMusic_createFromFile("resource/dog.ogg");
    h->ding = sfMusic_createFromFile("resource/pause.ogg");
}

void fill_struct5(def_t *h)
{
    h->shot = sfMusic_createFromFile("resource/shot.ogg");
    h->fall = sfMusic_createFromFile("resource/fall.ogg");
    h->soundfall = sfMusic_createFromFile("resource/hit.ogg");
    h->success = sfMusic_createFromFile("resource/success.ogg");
    sfSprite_setPosition(h->icon, (sfVector2f){350, 527});
    h->v_icon.x = 350;
    h->v_icon.y = 527;
    sfSprite_setPosition(h->icon, h->v_icon);
    h->state = 0;
    h->buff = NULL;
    h->rect.left = 6;
    h->rect.top = 0;
    h->rect.width = 170;
    h->rect.height = 165;
    h->check = 0;
    sfSprite_setPosition(h->dog, (sfVector2f){10, 500});
    h->rect_d.left = 0;
    h->rect_d.top = 230;
    h->rect_d.width = 110;
    h->rect_d.height = 110;
}

void fill_struct6(def_t *h)
{
    sfSprite_setPosition(h->duck, (sfVector2f){510, 510});
    sfSprite_setPosition(h->ground, (sfVector2f){0, 550});
    sfSprite_setPosition(h->tree, (sfVector2f){25, 80});
    sfSprite_setPosition(h->grass, (sfVector2f){-10, 500});
    sfSprite_setPosition(h->bush, (sfVector2f){900, 425});
    sfSprite_setPosition(h->paused, (sfVector2f){550, 200});
    sfSprite_setPosition(h->dog1, (sfVector2f){510, 400});
    sfSprite_setPosition(h->go, (sfVector2f){435, 170});
    h->pause = 0;
    h->jell = 0;
    h->d_score = 500;
    h->dep = 0;
    h->v_duck.x = 0;
    h->v_duck.y = -5;
    h->lost = 0;
}
