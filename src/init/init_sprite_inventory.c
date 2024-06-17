/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** init_sprite_inventory.c
*/

#include "main.h"
#include <stdlib.h>

static void init_sprite_inventory(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(INVENTORY, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {1.5, 1.5};
    sprite->pos = (sfVector2f) {650, 315};
    sprite->active = sfFalse;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
    sfSprite_setScale(sprite->sprite, sprite->scale);
}

static void init_sword(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(SWORD_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {1.3, 1.3};
    sprite->pos = (sfVector2f) {740, 400};
    sprite->active = sfFalse;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

static void init_pendentif(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(PENDENTIF_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {1, 1};
    sprite->pos = (sfVector2f) {868, 400};
    sprite->active = sfFalse;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

static void init_shield(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(SHIELD_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {1, 1};
    sprite->pos = (sfVector2f) {805, 400};
    sprite->active = sfFalse;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

void text_sword(game_t *game)
{
    game->text[4].font = sfFont_createFromFile("./text/ZeldaOracles.ttf");
    game->text[4].text = sfText_create();
    sfText_setString(game->text[4].text, "Sword");
    sfText_setFont(game->text[4].text, game->text[4].font);
    sfText_setCharacterSize(game->text[4].text, 20);
    sfText_setPosition(game->text[4].text, (sfVector2f){740, 320});
    sfText_setFillColor(game->text[4].text, sfWhite);
}

void text_shield(game_t *game)
{
    game->text[5].font = sfFont_createFromFile("./text/ZeldaOracles.ttf");
    game->text[5].text = sfText_create();
    sfText_setString(game->text[5].text, "Shield");
    sfText_setFont(game->text[5].text, game->text[5].font);
    sfText_setCharacterSize(game->text[5].text, 20);
    sfText_setPosition(game->text[5].text, (sfVector2f){805, 320});
    sfText_setFillColor(game->text[5].text, sfWhite);
}

void text_pendentif(game_t *game)
{
    game->text[6].font = sfFont_createFromFile("./text/ZeldaOracles.ttf");
    game->text[6].text = sfText_create();
    sfText_setString(game->text[6].text, "Pendentif");
    sfText_setFont(game->text[6].text, game->text[6].font);
    sfText_setCharacterSize(game->text[6].text, 20);
    sfText_setPosition(game->text[6].text, (sfVector2f){865, 320});
    sfText_setFillColor(game->text[6].text, sfWhite);
}

void init_all_inventory(game_t *game)
{
    init_sprite_inventory(&IMG[INV]);
    init_pendentif(&IMG[PENDENTIF]);
    init_sword(&IMG[SWORD]);
    init_shield(&IMG[SHIELD]);
    text_shield(game);
    text_sword(game);
    text_pendentif(game);
}
