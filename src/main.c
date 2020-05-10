/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** main.c
*/

#include "my_defender.h"

int main(void)
{
    srand(time(NULL));
    elements_t *elements = malloc(sizeof(elements_t));

    if (!elements)
        return (84);
    return (switch_scene(elements));
}