/*
** EPITECH PROJECT, 2019
** Visual Studio Live Share (Workspace)
** File description:
** draw_pause.c
*/

#include "my_defender.h"

int draw_pause(elements_t *elements, int pause)
{
    while (pause == 1) {
        while(sfRenderWindow_pollEvent(elements->window, &elements->event)) {
            if (evclose(elements->window, elements->event) == 1)
                return (1);
            if (quit_button(elements) == 1)
                return (1);
            pause = resume_button(elements, pause);
            if (menu_button(elements) == 2)
                return (2);
        }
        sfRenderWindow_drawSprite(elements->window, elements->pause_background->sprite, NULL);
        sfRenderWindow_display(elements->window);
    }
    sfRenderWindow_clear(elements->window, sfBlack);
    return (0);
}