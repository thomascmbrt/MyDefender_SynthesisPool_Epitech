/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** contour.c
*/

#include "my_defender.h"

contour_t init_contour(contour_t contour, char *path)
{
    contour.selected = 0;
    contour.texture = sfTexture_createFromFile(path, NULL);
    contour.sprite = sfSprite_create();
    sfSprite_setTexture(contour.sprite, contour.texture, sfTrue);
    return (contour);
}

void position_of_contour(contour_t *contour)
{
    int i = 0;

    contour->position.x = 540;
    contour->position.y = 240;
    while (contour->position.x < 830 && i < 12) {
        while (contour->position.y < 690) {
            contour[i].position.x = contour->position.x;
            contour[i].position.y = contour->position.y;
            sfSprite_setPosition(contour[i].sprite, contour[i].position);
            contour->position.y += 180;
            i++;
        }
        contour->position.x += 73;
        contour->position.y = 240;
    }
}

int make_contour(elements_t *elements)
{
    elements->contour = malloc(sizeof(contour_t) * 12);
    if (!elements->contour)
        return (84);
    for (int i = 0; i < 12; i++) {
        elements->contour[i] = init_contour(elements->contour[i], "./src/pictures/contour.png");
    }
    position_of_contour(elements->contour);
    return (0);
}