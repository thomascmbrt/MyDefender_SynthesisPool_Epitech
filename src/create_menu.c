/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** create_menu.c
*/

#include "my_defender.h"

void create_menu(elements_t *elements)
{
    sfVector2f position_information = {500, 40};

    elements->menu_background = initialize_game_object(elements->menu_background, "./src/pictures/menu.jpg");
    elements->information_background = initialize_game_object(elements->information_background, "./src/pictures/infos.png");
    sfSprite_setPosition(elements->information_background->sprite, position_information);
}