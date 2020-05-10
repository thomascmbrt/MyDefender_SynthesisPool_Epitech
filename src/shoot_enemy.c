/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** shoot_enemy.c
*/

#include "my_defender.h"

bullets_t shoot_enemy(bullets_t bullets, enemy_t enemy)
{
    sfVector2f enemy_position = sfSprite_getPosition(enemy.sprite);

    if (enemy_position.x >= bullets.position.x && enemy_position.x <= (bullets.position.x + 100))
        bullets.translation.x = 10;
    sfSprite_move(bullets.sprite, bullets.translation);
    return (bullets);
}