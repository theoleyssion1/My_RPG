/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** quest_sprites
*/
#include "main.h"

void init_quest_pnj_1(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(QUEST_PNJ_1_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {2.8, 2.8};
    sprite->pos = (sfVector2f) {878, 717};
    sprite->rect_int.height = 25;
    sprite->rect_int.left = 18;
    sprite->rect_int.top = 0;
    sprite->rect_int.width = 18;
    sprite->active = sfFalse;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setTextureRect(sprite->sprite, sprite->rect_int);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

void init_quest_pnj_2(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(QUEST_PNJ_2_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f){2.5, 2.5};
    sprite->pos = (sfVector2f) {735, 137};
    sprite->rect_int.height = 35;
    sprite->rect_int.left = 0;
    sprite->rect_int.top = 0;
    sprite->rect_int.width = 30;
    sprite->active = sfFalse;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setTextureRect(sprite->sprite, sprite->rect_int);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

void init_zeldo_pnj(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(ZELDO_PNJ_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {2.7, 2.7};
    sprite->pos = (sfVector2f) {1308, 520};
    sprite->rect_int.height = 55;
    sprite->rect_int.left = 0;
    sprite->rect_int.top = 0;
    sprite->rect_int.width = 28;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setTextureRect(sprite->sprite, sprite->rect_int);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

void init_dialogue_box_for_quest(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(DIALOGUE_BOX_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {3, 2.4};
    sprite->pos = (sfVector2f) {620, 540};
    sprite->rect_int.height = 60;
    sprite->rect_int.left = 0;
    sprite->rect_int.top = 0;
    sprite->rect_int.width = 270;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setTextureRect(sprite->sprite, sprite->rect_int);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}
