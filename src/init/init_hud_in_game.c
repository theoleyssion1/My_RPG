/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** init_hud_in_game
*/

#include "main.h"

static void init_heart(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(BASIC_HEART_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {0.18, 0.18};
    sprite->pos = (sfVector2f) {500, 25};
    sprite->active = sfTrue;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

static void init_empty_heart(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(EMPTY_HEART_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {0.18, 0.18};
    sprite->pos = (sfVector2f) {200, 100};
    sprite->active = sfFalse;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

void init_all_hud(game_t *game)
{
    init_heart(&IMG[BASIC_HEART]);
    init_empty_heart(&IMG[EMPTY_HEART]);
}
