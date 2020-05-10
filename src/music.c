/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** music.c
*/

#include "my_defender.h"

sfMusic *music_sound(sfMusic *music)
{
    music = sfMusic_createFromFile("./src/music/intro.ogg");
    sfMusic_setLoop(music, sfTrue);
    sfMusic_play(music);
    return (music);
}