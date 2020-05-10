/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** init.c
*/

#include "my_defender.h"

char *search_plants(plants_t *plants, int choice)
{
    switch (choice) {
        case 1:
            plants->life = 10;
            plants->ingame = 1;
            return ("./src/pictures/plants/gun.png");
            break;

        case 2:
            plants->life = 20;
            plants->ingame = 1;
            return ("./src/pictures/plants/patate.png");
            break;
        case 3:
            plants->degat = 4;
            plants->life = 10;
            plants->ingame = 1;
            return ("./src/pictures/plants/chou.png");
            break;
        case 4:
            plants->life = 2;
            plants->ingame = 1;
            return ("./src/pictures/plants/salade.png");
            break;
    }
    return (NULL);
}

plants_t initialize_plants(plants_t plants, int choice)
{
    plants.texture = sfTexture_createFromFile(search_plants(&plants, choice), NULL);
    plants.sprite = sfSprite_create();
    sfSprite_setTexture(plants.sprite, plants.texture, sfTrue);
    return (plants);
}

int init_struct_plants(elements_t *elements)
{
    elements->tab_of_plants = malloc(sizeof(plants_t) * 12);
    if (!elements->tab_of_plants)
        return (84);
    for (int i = 0; i < 12; i++) {
        elements->tab_of_plants[i].life = 0;
        elements->tab_of_plants[i].degat = 0;
        elements->tab_of_plants[i].ingame = 0;
    }
    elements->nb_of_plants = 0;
    return (0);
}