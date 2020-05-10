/*
** EPITECH PROJECT, 2019
** My_defender
** File description:
** create_window.c
*/

#include "my_defender.h"

sfRenderWindow *create_window(void)
{
    sfVideoMode mode = {1920, 1080, 32};

    sfRenderWindow *window = sfRenderWindow_create(mode, "Plants vs Zombies",
    sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    return (window);
}