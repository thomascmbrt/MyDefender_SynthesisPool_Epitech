/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** init_bullets.c
*/

#include "my_defender.h"

bullets_t initialize_bullets(bullets_t bullet)
{
    bullet.texture = sfTexture_createFromFile("./src/pictures/plants/bullet.png", NULL);
    bullet.sprite = sfSprite_create();
    sfSprite_setTexture(bullet.sprite, bullet.texture, sfTrue);
    return (bullet);
}

int init_struct_bullets(elements_t *elements)
{
    elements->bullet = malloc(sizeof(bullets_t) * 12);
    if (!elements->bullet)
        return (84);
    for (int i = 0; i < 12; i++) {
        elements->bullet[i].life = 1;
        elements->bullet[i].degat = 2;
    }
    return (0);
}