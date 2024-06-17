/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** init_sprite_game_over
*/

#include "main.h"

static void init_backgroud_game_over(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(GAME_OVER_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->scale = (sfVector2f) {1, 1};
    sprite->pos = (sfVector2f) {550, 400};
    sprite->clock = sfClock_create();
    sprite->active = sfFalse;
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
}

static void init_restart_button(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(RESTART_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->pos = (sfVector2f) {500, 700};
    sprite->active = sfFalse;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

static void init_restart_button_2(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(RESTART_2_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->pos = (sfVector2f) {500, 700};
    sprite->active = sfFalse;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

void init_game_over_sprite(game_t *game)
{
    init_backgroud_game_over(&IMG[GAME_OVER]);
    init_restart_button(&IMG[RESTART]);
    init_restart_button_2(&IMG[RESTART_2]);
}
