/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** my_defender.h
*/

#ifndef MY_DEFENDER_H_
#define MY_DEFENDER_H_

#include <unistd.h>
#include <stdlib.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <time.h>
#include "game_object.h"
#include "plants.h"
#include "enemy.h"

typedef struct game_object_s {
    sfTexture *texture;
    sfSprite *sprite;
} game_object_t;

typedef struct elements_s {
    sfEvent event;
    sfRenderWindow *window;
    sfClock *walk_enemy;
    sfMusic *music;
    game_object_t *menu_background;
    game_object_t *information_background;
    game_object_t *pause_background;
    game_object_t *game_tray;
    game_object_t *inventory;
    contour_t *contour;
    enemy_t *enemy;
    plants_t *tab_of_plants;
    bullets_t *bullet;
    int choice;
    int scene;
    int nb_of_enemy;
    int nb_of_enemy_ingame;
    int nb_of_plants;
    int nb_of_bullets;
} elements_t;

//initialize
game_object_t *initialize_game_object(game_object_t *to_initialize, char *path);
sfRenderWindow *create_window(void);
int init_enemy(elements_t *elements);

//switch
int switch_scene(elements_t *elements);

//menu
void create_menu(elements_t *elements);
int start_menu(elements_t *elements);

//game
void create_game(elements_t *elements);
int start_game_loop(elements_t *elements);
int make_contour(elements_t *elements);
int draw_pause(elements_t *elements, int pause);

//destroy
void destroy_menu(elements_t *elements);
void destroy_game_loop(elements_t *elements);

//display
void display_enemy(elements_t *elements);
void display_contour(elements_t *elements);
void display_plants_created(elements_t *elements);
void display_bullet(elements_t *elements);

void check_choice_inventory(elements_t *elements);
void is_selected(contour_t contour, sfRenderWindow *window);

//event
int is_event_actif(elements_t *elements);
int evclose(sfRenderWindow *window, sfEvent event);

//lib
int generate_number(int lower, int upper);

//init and manage bullet
void create_bullets_of_plants(elements_t *elements, sfVector2f);
bullets_t initialize_bullets(bullets_t bullet);
int init_struct_bullets(elements_t *elements);

//init plants part
int init_struct_plants(elements_t *elements);
int init_struct_bullets(elements_t *elements);
plants_t initialize_plants(plants_t plants, int choice);
void place_plants(elements_t *elements);

//mouse event
void is_mouse_on_start_button(elements_t *elements);
int is_mouse_on_info_button(elements_t *elements);
void is_mouse_on_sound_button(elements_t *elements);
int is_mouse_on_quit_button(elements_t *elements);
int is_mouse_on_pause_button(elements_t *elements);

//mouse_event_pause
int resume_button(elements_t *elements, int pause);
int menu_button(elements_t *elements);
int quit_button(elements_t *elements);

//music
sfMusic *music_sound(sfMusic *music);

#endif