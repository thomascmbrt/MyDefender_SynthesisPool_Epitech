/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** game_object.h
*/

#ifndef GAME_OBJECT_H_
#define GAME_OBJECT_H_

#include "my_defender.h"

typedef struct contour_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f position;
    int selected;
} contour_t;

#endif