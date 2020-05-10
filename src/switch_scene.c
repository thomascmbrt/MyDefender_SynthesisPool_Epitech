/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** switch_scene.c
*/

#include "my_defender.h"

int switch_scene(elements_t *elements)
{
    int retour = 0;

    elements->window = create_window();
    elements->music = music_sound(elements->music);
    elements->scene = 1;
    while (sfRenderWindow_isOpen(elements->window)) {
        if (elements->scene == 1) {
            create_menu(elements);
            if (start_menu(elements) == 1) {
                destroy_menu(elements);
                return (0);
            }
        } else if (elements->scene == 2) {
            create_game(elements);
            retour = start_game_loop(elements);
            if (retour == 1) {
                destroy_game_loop(elements);
                return (0);
            } else if (retour == 2) {
                destroy_game_loop(elements);
                elements->scene = 1;
                sfRenderWindow_clear(elements->window, sfBlack);
            }
        }
    }
    return (0);
}