/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** destroy.c
*/

#include "my_defender.h"

void destroy_menu(elements_t *elements)
{
    sfSprite_destroy(elements->menu_background->sprite);
    sfSprite_destroy(elements->information_background->sprite);
    sfMusic_stop(elements->music);
    sfMusic_destroy(elements->music);
    free(elements->menu_background);
    free(elements->information_background);
}

void destroy_game_loop(elements_t *elements)
{
    sfSprite_destroy(elements->game_tray->sprite);
    for (int i = 0; i != elements->nb_of_enemy; i++)
        sfSprite_destroy(elements->enemy[i].sprite);
    for (int i = 0; i != elements->nb_of_plants; i++)
        sfSprite_destroy(elements->tab_of_plants[i].sprite);
    free(elements->enemy);
    free(elements->tab_of_plants);
    sfMusic_stop(elements->music);
    sfMusic_destroy(elements->music);
}