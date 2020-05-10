/*
** EPITECH PROJECT, 2019
** Visual Studio Live Share (Workspace)
** File description:
** create_bullets_of_plants.c
*/

#include "my_defender.h"

void create_bullets_of_plants(elements_t *elements, sfVector2f position)
{
    if (elements->choice == 1) {
        elements->bullet[elements->nb_of_bullets] = initialize_bullets(elements->bullet[elements->nb_of_bullets]);
        sfSprite_setPosition(elements->bullet[elements->nb_of_bullets].sprite, position);
        elements->nb_of_bullets += 1;
    }
}