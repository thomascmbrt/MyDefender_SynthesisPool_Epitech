/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** drop_plants.c
*/

#include "my_defender.h"

void check_choice_inventory(elements_t *elements)
{
    sfVector2i get_mouse_position = sfMouse_getPositionRenderWindow(elements->window);

    if (elements->event.type == sfEvtMouseButtonPressed) {
        if (get_mouse_position.x >= 950  && get_mouse_position.x <= 1050
        && get_mouse_position.y >= 900 && get_mouse_position.y <= 1000) {
            elements->choice = 1;
            return;
        }
        else if (get_mouse_position.x >= 1220 && get_mouse_position.x <= 1300
        && get_mouse_position.y >= 900 && get_mouse_position.y <= 1000) {
            elements->choice = 2;
            return;
        }
        else if (get_mouse_position.x >= 1480 && get_mouse_position.x <= 1590
        && get_mouse_position.y >= 900 && get_mouse_position.y <= 1000) {
            elements->choice = 3;
            return;
        }
        else if (get_mouse_position.x >= 1760 && get_mouse_position.x <= 1850
        && get_mouse_position.y >= 900 && get_mouse_position.y <= 1000) {
            elements->choice = 4;
            return;
        }
    }
}

plants_t create_plants_ingame(plants_t plant, elements_t *elements)
{
    plant = initialize_plants(elements->tab_of_plants[elements->nb_of_plants], elements->choice);
    return (plant);
}

void place_plants(elements_t *elements)
{
    sfVector2i get_mouse_position = sfMouse_getPositionRenderWindow(elements->window);
    sfVector2f set_plants_position = {0, 0};

    if (elements->nb_of_plants < 12) {
        while (elements->choice != 0) {
            display_contour(elements);
            get_mouse_position = sfMouse_getPositionRenderWindow(elements->window);
            set_plants_position.x = (float)get_mouse_position.x - 50;
            set_plants_position.y = (float)get_mouse_position.y - 50;
            while(sfRenderWindow_pollEvent(elements->window, &elements->event)) {
                if (elements->event.type == sfEvtMouseButtonPressed &&
                get_mouse_position.x >= 540 && get_mouse_position.x <= 830
                && get_mouse_position.y >= 240 && get_mouse_position.y <= 690) {
                    elements->tab_of_plants[elements->nb_of_plants] = create_plants_ingame(elements->tab_of_plants[elements->nb_of_plants], elements);
                    create_bullets_of_plants(elements, set_plants_position);
                    sfSprite_setPosition(elements->tab_of_plants[elements->nb_of_plants].sprite, set_plants_position);
                    elements->nb_of_plants += 1;
                    return;
                } else if (elements->event.type == sfEvtMouseButtonPressed && get_mouse_position.x > 830) {
                    elements->choice = 0;
                    return;
                }
            }
            sfRenderWindow_display(elements->window);
        }
    } else {}
    elements->choice = 0;
}