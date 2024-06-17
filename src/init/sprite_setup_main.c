/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** sprite_setup
*/
#include "main.h"
#include <stdlib.h>

static void init_background_sprite(sprite_t *sprite, char *assets)
{
    sprite->texture = sfTexture_createFromFile(assets, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {1, 1};
    sprite->active = sfFalse;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
}

static void init_start_button_sprite(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(START_BUTTON_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {4, 4};
    sprite->pos = (sfVector2f) {650, 800};
    sprite->rect_int.height = 32;
    sprite->rect_int.left = 0;
    sprite->rect_int.top = 0;
    sprite->rect_int.width = 64;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setTextureRect(sprite->sprite, sprite->rect_int);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

static void init_menu_button_sprite(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(MENU_BUTTON_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {4, 4};
    sprite->pos = (sfVector2f) {1050, 800};
    sprite->rect_int.height = 26;
    sprite->rect_int.left = 0;
    sprite->rect_int.top = 0;
    sprite->rect_int.width = 64;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setTextureRect(sprite->sprite, sprite->rect_int);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

static void init_zeldo_sprite(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(ZELDO_SPRITE, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {3, 3};
    sprite->pos = (sfVector2f) {635, 150};
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

static void init_quit_button(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(QUIT_BUTTON_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {0.2, 0.2};
    sprite->pos = (sfVector2f) {1700, 950};
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

static void init_new_game_button(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(NEW_GAME_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {1.2, 1.2};
    sprite->pos = (sfVector2f) {550, 700};
    sprite->active = sfFalse;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

static void init_new_game_2_button(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(NEW_GAME_2_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {1.2, 1.2};
    sprite->pos = (sfVector2f) {550, 700};
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

static void init_load_game_button(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(LOAD_GAME_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {1.2, 1.2};
    sprite->pos = (sfVector2f) {1050, 700};
    sprite->active = sfFalse;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

static void init_load_game_2_button(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(LOAD_GAME_2_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {1.2, 1.2};
    sprite->pos = (sfVector2f) {1050, 700};
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

void init_main_sprite(game_t *game)
{
    init_background_sprite(&IMG[BACK_START], MAIN_BACKGROUND);
    init_start_button_sprite(&IMG[START_BUTTON]);
    init_menu_button_sprite(&IMG[MENU_BUT]);
    init_zeldo_sprite(&IMG[LOGO]);
    init_quit_button(&IMG[QUIT_BUTTON]);
    init_load_game_button(&IMG[LOAD_GAME]);
    init_load_game_2_button(&IMG[LOAD_GAME_2]);
    init_new_game_button(&IMG[NEW_GAME]);
    init_new_game_2_button(&IMG[NEW_GAME_2]);
}
