/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** plants.h
*/

#ifndef PLANTS_H_
#define PLANTS_H_

#include "my_defender.h"

typedef struct bullets_s {
    sfClock *clock;
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f position;
    sfVector2f translation;
    int life;
    int degat;
    int number;
} bullets_t;

typedef struct plants_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfClock *clock;
    int life;
    int degat;
    int ingame;
} plants_t;

#endif