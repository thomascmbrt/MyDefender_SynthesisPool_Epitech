/*
** EPITECH PROJECT, 2019
** Visual Studio Live Share (Workspace)
** File description:
** create_game.c
*/

#include "my_defender.h"

void create_game(elements_t *elements)
{
    sfVector2f position_inventory = {0, 830};
    sfVector2f position_pause = {600, 350};

    elements->game_tray = initialize_game_object(elements->game_tray, "./src/pictures/plateau.png");
    elements->inventory = initialize_game_object(elements->inventory, "./src/pictures/inventory.png");
    elements->pause_background = initialize_game_object(elements->information_background, "./src/pictures/bottom.png");
    sfSprite_setPosition(elements->inventory->sprite, position_inventory);
    sfSprite_setPosition(elements->pause_background->sprite, position_pause);
}