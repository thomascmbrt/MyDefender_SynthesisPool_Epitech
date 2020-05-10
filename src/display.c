/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** display.c
*/

#include "my_defender.h"

void display_enemy(elements_t *elements)
{
    for (int i = 0; i < elements->nb_of_enemy; i++)
        sfRenderWindow_drawSprite(elements->window, elements->enemy[i].sprite, NULL);
}

void display_contour(elements_t *elements)
{
    for (int i = 0; i < 12; i++) {
        if (elements->contour->selected == 0)
            sfRenderWindow_drawSprite(elements->window, elements->contour[i].sprite, NULL);
    }
}

void display_bullet(elements_t *elements)
{
    int i = 0;
    if(sfTime_asMilliseconds(sfClock_getElapsedTime(elements->bullet->clock)) > 60) {
        elements->bullet[i].translation.x = 1;
        sfSprite_move(elements->bullet[i].sprite, elements->bullet[i].translation);
        i++;
        sfClock_restart(elements->walk_enemy);
    }
    for (; i != elements->nb_of_bullets; i++)
        sfRenderWindow_drawSprite(elements->window, elements->bullet[i].sprite, NULL);
}

void display_plants_created(elements_t *elements)
{
    for (int i = 0; i != elements->nb_of_plants; i++)
        sfRenderWindow_drawSprite(elements->window, elements->tab_of_plants[i].sprite, NULL);
    elements->choice = 0;
}