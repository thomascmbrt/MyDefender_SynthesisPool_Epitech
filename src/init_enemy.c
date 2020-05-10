/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** init.c
*/

#include "my_defender.h"

char *search_enemy()
{
    int choice = generate_number(1, 2);

    switch (choice) {
    case 1:
        return ("./src/pictures/enemy/woman_zombie1.png");
        break;

    case 2:
        return ("./src/pictures/enemy/fast_enemy.png");
        break;
    }
    return (NULL);
}

enemy_t initialize_enemy(enemy_t enemy)
{
    int place = generate_number(1, 3);

    switch (place) {
        case 1:
            place = 100;
            break;
        case 2:
            place = 280;
            break;
        case 3:
            place = 480;
            break;
    }
    enemy.life = 10;
    enemy.degat = 2;
    enemy.movement.x = -5;
    enemy.movement.y = 0;
    enemy.position.x = generate_number(1300, 1600);
    enemy.position.y = place;
    enemy.rect.height = 200;
    enemy.rect.left = 982;
    enemy.rect.top = 0;
    enemy.rect.width = 190;
    enemy.texture = sfTexture_createFromFile("./src/pictures/enemy/zombie_basic.png", NULL);
    enemy.sprite = sfSprite_create();
    sfSprite_setPosition(enemy.sprite, enemy.position);
    sfSprite_setTexture(enemy.sprite, enemy.texture, sfTrue);
    sfSprite_setTextureRect(enemy.sprite, enemy.rect);
    return (enemy);
}

int init_enemy(elements_t *elements)
{
    elements->enemy = malloc(sizeof(enemy_t) * elements->nb_of_enemy);
    if (!elements->enemy)
        return (84);
    for (int i = 0; i < elements->nb_of_enemy; i++)
        elements->enemy[i] = initialize_enemy(elements->enemy[i]);
    return (0);
}