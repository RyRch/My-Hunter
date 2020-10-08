/*
** EPITECH PROJECT, 2019
** myh
** File description:
** hunter
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/System.h>
#include <SFML/Config.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "struct.h"

void my_putchar(char c);

int my_putstr(char const *str);

void display(char **av);

void fill_struct(def_t *h);

void game_loop(def_t *h);

void destroy(def_t *h);

void event(def_t *h);

void starting_menu(def_t *h);

char *open_read(void);

int gest_info(def_t *h);

char **fill_tab(char **tab);

int my_getnbr(char const *str);

char *my_itoc(int nb);

char *my_strcpy(char *dest, char const *src);

int my_strlen(char const *str);

int *my_intdup(int *src, int len);

char **malloc_tab(char **tab);

char *my_strdup(char const *src);

void preparation(def_t *h);

void duck(def_t *h);

void fill_struct1(def_t *h);

void fill_struct2(def_t *h);

void fill_struct3(def_t *h);

void fill_struct4(def_t *h);

void fill_struct5(def_t *h);

void fill_struct6(def_t *h);

void gest_struct_fill(def_t *h);

void cursor(def_t *h);

void cursor(def_t *h);

void gest_duck(def_t *h);

void duck2(def_t *h);

void duck3(def_t *h);

void duck4(def_t *h);

void pause_event(def_t *h);

void killer(def_t *h);

void kill2(def_t *h);

void gest_prepa(def_t *h);

void preparation2(def_t *h);

int gest_info(def_t *h);

int number(char *str);

