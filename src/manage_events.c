/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** manage_events.c
*/

#include "my_defender.h"

int is_event_actif(elements_t *elements)
{
    is_mouse_on_start_button(elements);
    while (is_mouse_on_info_button(elements) == 1)
        sfRenderWindow_drawSprite(elements->window, elements->information_background->sprite, NULL);
    is_mouse_on_sound_button(elements);
    if (is_mouse_on_quit_button(elements) == 1)
        return (1);
    if (evclose(elements->window, elements->event) == 1)
        return (1);
    return (0);
}