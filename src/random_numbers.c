/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** random_numbers.c
*/

#include "my_defender.h"

int generate_number(int lower, int upper)
{
    int num = 0;

    num = (rand() % (upper - lower + 1)) + lower;
    return (num);
}