/*
** EPITECH PROJECT, 2019
** Visual Studio Live Share (Workspace)
** File description:
** start_game.c
*/

#include "my_defender.h"

int start_game_loop(elements_t *elements)
{
    int i = 0;
    int retour = 0;

    elements->nb_of_enemy = 2;
    init_enemy(elements);
    init_struct_plants(elements);
    init_struct_bullets(elements);
    make_contour(elements);
    sfRenderWindow_clear(elements->window, sfBlack);
    elements->walk_enemy = sfClock_create();
    while (elements->scene == 2) {
        sfRenderWindow_drawSprite(elements->window, elements->game_tray->sprite, NULL);
        sfRenderWindow_drawSprite(elements->window, elements->inventory->sprite, NULL);
        if(sfTime_asMilliseconds(sfClock_getElapsedTime(elements->walk_enemy)) > 60) {
            elements->enemy[i] = walk_enemy(elements->enemy[i]);
            i++;
            sfClock_restart(elements->walk_enemy);
        }
        display_enemy(elements);
        while (sfRenderWindow_pollEvent(elements->window, &elements->event)) {
            check_choice_inventory(elements);
            retour = is_mouse_on_pause_button(elements);
            if (retour == 1)
                return (1);
            else if (retour == 2)
                return (2);
            if (evclose(elements->window, elements->event) == 1)
                return (1);
        }
        place_plants(elements);
        display_plants_created(elements);
        elements->bullet->clock = sfClock_create();
        display_bullet(elements);
        sfRenderWindow_display(elements->window);
        if (i == elements->nb_of_enemy)
            i = 0;
    }
    return (0);
}