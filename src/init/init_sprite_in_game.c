/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** init_sprite_in_game
*/
#include "main.h"

static void sprite_resume_button(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(RESUME_BUTTON_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->pos = (sfVector2f) {830, 200};
    sprite->active = sfFalse;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

static void sprite_resume2_button(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(RESUME_BUTTON_2_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->pos = (sfVector2f) {830, 200};
    sfSprite_setPosition(sprite->sprite, sprite->pos);
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
}

static void sprite_menu_button(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(MENU_PAUSE_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->pos = (sfVector2f) {830, 400};
    sprite->active = sfFalse;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

static void sprite_menu2_button(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(MENU_PAUSE_2_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->pos = (sfVector2f) {830, 400};
    sprite->active = sfFalse;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
}

static void sprite_save_button(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(SAVE_BUTTON_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->pos = (sfVector2f) {830, 600};
    sprite->active = sfFalse;
    sfSprite_setPosition(sprite->sprite, sprite->pos);
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
}

static void sprite_save2_button(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(SAVE_BUTTON_2_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->pos = (sfVector2f) {830, 600};
    sfSprite_setPosition(sprite->sprite, sprite->pos);
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
}

static void sprite_quit_button(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile(QUIT_BUTTON_GAME_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->pos = (sfVector2f) {830, 800};
    sprite->active = sfFalse;
    sfSprite_setPosition(sprite->sprite, sprite->pos);
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
}

static void sprite_quit2_button(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile
    (QUIT_BUTTON_GAME_2_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->pos = (sfVector2f) {830, 800};
    sfSprite_setPosition(sprite->sprite, sprite->pos);
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
}

static void sprite_green_sbire_button(sprite_t *sprite)
{
    sprite->texture = sfTexture_createFromFile
    (GREEN_SBIRE_ASSETS, NULL);
    sprite->sprite = sfSprite_create();
    sprite->clock = sfClock_create();
    sprite->pos = (sfVector2f) {998, 372};
    sprite->scale = (sfVector2f) {2.5, 2.5};
    sprite->rect_int.height = 36;
    sprite->rect_int.left = 0;
    sprite->rect_int.top = 0;
    sprite->rect_int.width = 28;
    sprite->active = sfFalse;
    sfSprite_setTexture(sprite->sprite, sprite->texture, sfTrue);
    sfSprite_setPosition(sprite->sprite, sprite->pos);
    sfSprite_setTextureRect(sprite->sprite, sprite->rect_int);
    sfSprite_setScale(sprite->sprite, sprite->scale);
}

void init_sprite_in_pause(game_t *game)
{
    sprite_resume_button(&IMG[RESUME_BUTTON]);
    sprite_resume2_button(&IMG[RESUME_BUTTON_2]);
    sprite_menu_button(&IMG[MENU_PAUSE]);
    sprite_menu2_button(&IMG[MENU_PAUSE_2]);
    sprite_save_button(&IMG[SAVE_BUTTON]);
    sprite_save2_button(&IMG[SAVE_BUTTON_2]);
    sprite_quit_button(&IMG[QUIT_BUTTON_IN_GAME]);
    sprite_quit2_button(&IMG[QUIT_BUTTON_IN_GAME_2]);
    sprite_green_sbire_button(&IMG[GREEN_SBIRE]);
    init_quest_pnj_1(&IMG[QUEST_PNJ_1]);
    init_quest_pnj_2(&IMG[QUEST_PNJ_2]);
    init_zeldo_pnj(&IMG[ZELDO_PNJ]);
    init_dialogue_box_for_quest(&IMG[QUEST_BOX]);
}
