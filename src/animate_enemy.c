/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** animate_enemy.c
*/

#include "my_defender.h"

enemy_t walk_enemy(enemy_t enemy)
{
    enemy.rect.left += 195;
    if (enemy.rect.left >= 1117)
        enemy.rect.left = 0;
    sfSprite_setTextureRect(enemy.sprite, enemy.rect);
    sfSprite_move(enemy.sprite, enemy.movement);
    return (enemy);
}