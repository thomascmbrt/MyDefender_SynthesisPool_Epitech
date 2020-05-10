/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** enemy.h
*/

#ifndef ENEMY_H_
#define ENEMY_H_

#include "my_defender.h"


typedef struct enemy_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f position;
    sfVector2f movement;
    sfIntRect rect;
    int life;
    int degat;
    int ingame;
} enemy_t;

enemy_t walk_enemy(enemy_t enemy);

#endif