/*
** EPITECH PROJECT, 2019
** struct
** File description:
** hunter
*/

typedef struct hunter
{
    sfVideoMode mode;
    sfRenderWindow *window;
    sfEvent event;
    char *tl;
    sfSprite *fd;
    sfSprite *go;
    sfSprite *paused;
    sfTexture *t_paused;
    sfTexture *t_go;
    sfSprite *ground;
    sfSprite *cursor;
    sfTexture *t_fd;
    sfTexture *t_cursor;
    sfSprite *icon;
    sfSprite *duck;
    sfSprite *bush;
    sfSprite *grass;
    sfSprite *dog;
    sfSprite *bsky;
    sfSprite *tree;
    sfSprite *dog1;
    sfTexture *t_dog1;
    sfTexture *t_bsky;
    sfTexture *t_bush;
    sfTexture *t_grass;
    sfTexture *t_tree;
    sfTexture *t_dog;
    sfTexture *t_duck;
    sfIntRect rect;
    sfIntRect rect_d;
    sfTexture *t_icon;
    sfTexture *t_ground;
    sfFont *font;
    sfText *text;
    sfText *scoret;
    sfFont *scoref;
    sfTime time;
    sfTime time_g;
    sfTime timed;
    sfTime time_d;
    sfTime time_d1;
    sfClock *clock;
    sfClock *clock_g;
    sfClock *clockd;
    sfClock *clock_d;
    sfClock *clock_d1;
    float sec;
    float sec_g;
    float sec_d;
    float sec_d1;
    float secd;
    sfMusic *maint;
    sfMusic *intro;
    sfMusic *dog_s;
    sfMusic *ding;
    sfMusic *shot;
    sfMusic *fall;
    sfMusic *soundfall;
    sfMusic *success;
    sfColor vert;
    int cnt;
    int state;
    int check;
    sfVector2f v_icon;
    sfVector2i mouse;
    char *buff;
    int pause;
    char *score;
    char *scores;
    int jell;
    int d_score;
    sfBool looper;
    int dep;
    sfVector2f v_duck;
    int lost;
}def_t;

