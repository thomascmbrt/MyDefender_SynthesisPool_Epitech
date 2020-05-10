/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** is_mouse.c
*/

#include "my_defender.h"

void is_mouse_on_start_button(elements_t *elements)
{
    sfVector2i mouse_position = sfMouse_getPositionRenderWindow(elements->window);

    if (elements->event.type == sfEvtMouseButtonPressed
    && mouse_position.x >= 882 && mouse_position.x <= 992
    && mouse_position.y >= 96 && mouse_position.y <= 196)
        elements->scene = 2;
}

int is_mouse_on_info_button(elements_t *elements)
{
    sfVector2i mouse_position = sfMouse_getPositionRenderWindow(elements->window);

    if (elements->event.type == sfEvtMouseButtonPressed
    && mouse_position.x >= 34 && mouse_position.x <= 134
    && mouse_position.y >= 44 && mouse_position.y <= 144) {
        sfRenderWindow_drawSprite(elements->window, elements->information_background->sprite, NULL);
        return (1);
    }
    return (0);
}

void is_mouse_on_sound_button(elements_t *elements)
{
    sfVector2i mouse_position = sfMouse_getPositionRenderWindow(elements->window);
    static int on_off = 0;

    if (elements->event.type == sfEvtMouseButtonPressed
    && mouse_position.x >= 1733 && mouse_position.x <= 1833
    && mouse_position.y >= 41 && mouse_position.y <= 141) {
        if (on_off == 0) {
                sfMusic_setVolume(elements->music, 0);
            on_off = 1;
        } else if (on_off == 1) {
                sfMusic_setVolume(elements->music, 100);
            on_off = 0;
        }
    }
}

int is_mouse_on_quit_button(elements_t *elements)
{
    sfVector2i mouse_position = sfMouse_getPositionRenderWindow(elements->window);

    if (elements->event.type == sfEvtMouseButtonPressed
    && mouse_position.x >= 882 && mouse_position.x <= 992
    && mouse_position.y >= 882 && mouse_position.y <= 992)
        return (1);
    return (0);
}

int is_mouse_on_pause_button(elements_t *elements)
{
    sfVector2i mouse_position = sfMouse_getPositionRenderWindow(elements->window);
    int pause = 0;

    if (elements->event.type == sfEvtMouseButtonPressed
    && mouse_position.x >= 379 && mouse_position.x <= 509
    && mouse_position.y >= 880 && mouse_position.y <= 1010) {
        pause = 1;
        return (draw_pause(elements, pause));
    }
    return (0);
}