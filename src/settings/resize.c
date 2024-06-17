/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** resize
*/

#include "main.h"

sfVector2f resize_low_window(sprite_t *sprite)
{
    sprite->pos.y = (720 * sprite->pos.y) / 1080;
    sprite->pos.x = (1080 * sprite->pos.x) / 1920;
    return sprite->pos;
}

sfVector2f resize_high_window(sprite_t *sprite)
{
    sprite->pos.y = (1080 * sprite->pos.y) / 720;
    sprite->pos.x = (1920 * sprite->pos.x) / 1080;
    return sprite->pos;
}
