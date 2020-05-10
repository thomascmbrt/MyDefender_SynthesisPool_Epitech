/*
** EPITECH PROJECT, 2019
** Visual Studio Live Share (Workspace)
** File description:
** is_pause_menu.c
*/

#include "my_defender.h"

int resume_button(elements_t *elements, int pause)
{
    sfVector2i mouse_position = sfMouse_getPositionRenderWindow(elements->window);

    if (elements->event.type == sfEvtMouseButtonPressed
    && mouse_position.x >= 850 && mouse_position.x <= 980
    && mouse_position.y >= 410 && mouse_position.y <= 530) {
        pause = 0;
        return (pause);
    }
    return (1);
}

int menu_button(elements_t *elements)
{
    sfVector2i mouse_position = sfMouse_getPositionRenderWindow(elements->window);

    if (elements->event.type == sfEvtMouseButtonPressed
    && mouse_position.x >= 660 && mouse_position.x <=790
    && mouse_position.y >= 410 && mouse_position.y <= 530)
        return (2);
    return (0);
}

int quit_button(elements_t *elements)
{
    sfVector2i mouse_position = sfMouse_getPositionRenderWindow(elements->window);

    if (elements->event.type == sfEvtMouseButtonPressed
    && mouse_position.x >= 1050 && mouse_position.x <= 1180
    && mouse_position.y >= 410 && mouse_position.y <= 530)
        return (1);
    return (0);
}