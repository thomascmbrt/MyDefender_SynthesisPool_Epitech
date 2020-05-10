/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** event_close.c
*/

#include "my_defender.h"

int evclose(sfRenderWindow *window, sfEvent event)
{
    sfRenderWindow_pollEvent(window, &event);
    if (event.type == sfEvtClosed) {
        sfRenderWindow_close(window);
        return (1);
    }
    return (0);
}