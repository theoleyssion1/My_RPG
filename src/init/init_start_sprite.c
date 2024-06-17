/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** init_start_sprite
*/
#include "main.h"

static void init_all_link(sprite_t *sprite, int x, int y,
    const char *assets)
{
    sprite->texture = sfTexture_createFromFile(assets, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {10, 10};
    sprite->pos = (sfVector2f) {x, y};
    sprite->rect_int = (sfIntRect) {917, 211, 16, 27};
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setTextureRect(sprite->sprite, sprite->rect_int);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

static void init_back(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(START_BACKGROUND, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {3.32, 2.82};
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
}

static void init_select_arrow(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(SELECT_ARROW_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {0.1, 0.1};
    sprite->pos = (sfVector2f) {330, 300};
    sfSprite_setPosition(sprite->sprite, sprite->pos);
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
}

void init_start_sprite(game_t *game)
{
    int pos_green[2] = {300, 400};
    int pos_blue[2] = {700, 400};
    int pos_red[2] = {1100, 400};
    int pos_purple[2] = {1500, 400};

    init_back(&IMG[SELECT_BACK]);
    init_all_link(&IMG[GREEN_LINK], pos_green[0],
    pos_green[1], GREEN_LINK_ASSETS);
    init_all_link(&IMG[RED_LINK], pos_red[0],
    pos_red[1], RED_LINK_ASSETS);
    init_all_link(&IMG[BLUE_LINK], pos_blue[0],
    pos_blue[1], BLUE_LINK_ASSETS);
    init_all_link(&IMG[PURPLE_LINK], pos_purple[0],
    pos_purple[1], PURPLE_LINK_ASSETS);
    init_select_arrow(&IMG[SELECT_ARROW]);
}
