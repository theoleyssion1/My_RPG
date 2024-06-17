/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** sprite_setup_menu
*/

#include "main.h"

static void init_background_menu(sprite_t *sprite, char *assets)
{
    sprite->texture = sfTexture_createFromFile(assets, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {1.78, 1.78};
    sprite->pos = (sfVector2f) {1, 1};
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
}

static void init_song_unmute_menu(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(SONG_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {2, 2};
    sprite->pos = (sfVector2f) {900, 800};
    sprite->rect_int.height = 60;
    sprite->rect_int.left = 40;
    sprite->rect_int.top = 260;
    sprite->rect_int.width = 70;
    sprite->active = sfFalse;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setTextureRect(sprite->sprite, sprite->rect_int);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

static void init_song_mute_menu(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(SONG_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {2, 2};
    sprite->pos = (sfVector2f) {910, 800};
    sprite->rect_int.height = 60;
    sprite->rect_int.left = 210;
    sprite->rect_int.top = 260;
    sprite->rect_int.width = 60;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setTextureRect(sprite->sprite, sprite->rect_int);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

static void init_song_min_sprite(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(SONG_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {2, 2};
    sprite->pos = (sfVector2f) {820, 600};
    sprite->rect_int.height = 60;
    sprite->rect_int.left = 103;
    sprite->rect_int.top = 260;
    sprite->rect_int.width = 60;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setTextureRect(sprite->sprite, sprite->rect_int);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

static void init_son_plus_sprite(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(SONG_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {2, 2};
    sprite->pos = (sfVector2f) {1040, 600};
    sprite->rect_int.height = 60;
    sprite->rect_int.left = 170;
    sprite->rect_int.top = 260;
    sprite->rect_int.width = 45;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setTextureRect(sprite->sprite, sprite->rect_int);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

static void init_volume_bar(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(ALL_BUTTON_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {2.25, 2.25};
    sprite->pos = (sfVector2f) {920, 400};
    sprite->rect_int.height = 43;
    sprite->rect_int.left = 41;
    sprite->rect_int.top = 0;
    sprite->rect_int.width = 50;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setTextureRect(sprite->sprite, sprite->rect_int);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

static void init_back_to_start(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(ALL_BUTTON_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {2.5, 2.5};
    sprite->pos = (sfVector2f) {50, 50};
    sprite->rect_int.height = 40;
    sprite->rect_int.left = 171;
    sprite->rect_int.top = 85;
    sprite->rect_int.width = 45;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setTextureRect(sprite->sprite, sprite->rect_int);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

static void init_cross_window(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(CROSS_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->scale = (sfVector2f) {2, 2};
    sprite->pos = (sfVector2f) {920, 400};
    sprite->active = sfTrue;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setScale(sprite->sprite, sprite->scale);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

void init_menu_sprite(game_t *game)
{
    init_background_menu(&IMG[MENU_BAC], MENU_BACKGROUND);
    init_song_unmute_menu(&IMG[SONG_UNMUTE]);
    init_song_mute_menu(&IMG[SONG_MUTE]);
    init_navi_sprite(&IMG[NAVI_SPRITE]);
    init_help_bubble(&IMG[HELP_BUBBLE]);
    init_dialogue_box(&IMG[DIALOGUE_BOX]);
    init_son_plus_sprite(&IMG[SONG_PLUS]);
    init_song_min_sprite(&IMG[SONG_MOINS]);
    init_volume_bar(&IMG[VOLUME_BAR]);
    init_back_to_start(&IMG[BACK_MENU]);
    init_cross_window(&IMG[BUTTON_WINDOW]);
}
