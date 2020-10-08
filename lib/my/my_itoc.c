/*
** EPITECH PROJECT, 2019
** my_itoc
** File description:
** my_itoc
*/

#include "my.h"

char *my_itoc(int nb)
{
    int size = 0;
    char *str = NULL;
    int i = nb;

    while (i > 0) {
        i /= 10;
        size++;
    }
    str = malloc(sizeof(*str) * (size + 1));
    if (str == NULL)
        return (NULL);
    str[size] = '\0';
    while (size--) {
        str[size] = nb % 10 + '0';
        nb /= 10;
    }
    return (str);
}
