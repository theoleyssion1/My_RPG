/*
** EPITECH PROJECT, 2024
** My_rpg
** File description:
** tuto_sprite
*/
#include "main.h"

void init_help_bubble(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(HELP_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {0.3, 0.3};
    sprite->pos = (sfVector2f) {1580, -35};
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

void init_navi_sprite(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(NAVI_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {7, 7};
    sprite->pos = (sfVector2f) {1700, 50};
    sprite->rect_int.height = 16;
    sprite->rect_int.left = 277;
    sprite->rect_int.top = 11;
    sprite->rect_int.width = 23;
    sprite->active = sfFalse;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setTextureRect(sprite->sprite, sprite->rect_int);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

void init_dialogue_box(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(DIALOGUE_BOX_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {4, 4};
    sprite->pos = (sfVector2f) {450, 30};
    sprite->rect_int.height = 60;
    sprite->rect_int.left = 0;
    sprite->rect_int.top = 0;
    sprite->rect_int.width = 270;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setTextureRect(sprite->sprite, sprite->rect_int);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}
