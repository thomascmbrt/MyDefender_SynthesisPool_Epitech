/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** start_menu.c
*/

#include "my_defender.h"

int start_menu(elements_t *elements)
{
    while (elements->scene == 1) {
        sfRenderWindow_drawSprite(elements->window, elements->menu_background->sprite, NULL);
        while (sfRenderWindow_pollEvent(elements->window, &elements->event)) {
            if (is_event_actif(elements) == 1)
                return (1);
        }
        sfRenderWindow_display(elements->window);
    }
    return (0);
}