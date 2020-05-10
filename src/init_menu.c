/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** init_menu.c
*/

#include "my_defender.h"

game_object_t *initialize_game_object(game_object_t *to_initialize, char *path)
{
    to_initialize = malloc(sizeof(game_object_t));
    to_initialize->texture = sfTexture_createFromFile(path, NULL);
    to_initialize->sprite = sfSprite_create();
    sfSprite_setTexture(to_initialize->sprite, to_initialize->texture, sfTrue);
    return (to_initialize);
}