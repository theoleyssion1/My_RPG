/*
** EPITECH PROJECT, 2024
** main_character
** File description:
** main_character
*/

#include <stdlib.h>
#include "main.h"
#include <stdio.h>

static void init_animation_fight(game_t *game)
{
    game->fight.rec_fight.left = 140;
    game->fight.rec_fight.width = 40;
    game->fight.rec_fight.height = 42;
    game->fight.rec_fight.top = 10;
}

static void init_green_link(game_t *game)
{
    game->player[0].player = sfSprite_create();
    game->player[0].player_text = sfTexture_createFromFile(GREEN_LINK_ASSETS,
    NULL);
    game->player[0].scale = (sfVector2f) {2.5, 2.5};
    game->player[0].player_rect.height = 28;
    game->player[0].player_rect.left = 7;
    game->player[0].player_rect.top = 216;
    game->player[0].player_rect.width = 24;
    game->player[0].pos = (sfVector2f) {830, 550};
    game->player[0].pos_player_map_x = 2238;
    game->player[0].pos_player_map_y = 2853;
    game->player[0].animation_clock = sfClock_create();
    game->player[0].facing = LEFT;
    game->player[0].is_moving = sfFalse;
    sfSprite_setTexture(game->player[0].player, game->player[0].player_text,
    sfTrue);
    sfSprite_setScale(game->player[0].player, game->player[0].scale);
    sfSprite_setTextureRect(game->player[0].player,
    game->player[0].player_rect);
    sfSprite_setPosition(game->player[0].player, game->player[0].pos);
}

static void init_red_link(game_t *game)
{
    game->player[1].player = sfSprite_create();
    game->player[1].player_text = sfTexture_createFromFile(RED_LINK_ASSETS,
    NULL);
    game->player[1].scale = (sfVector2f) {2.5, 2.5};
    game->player[1].player_rect.height = 28;
    game->player[1].player_rect.left = 7;
    game->player[1].player_rect.top = 216;
    game->player[1].player_rect.width = 24;
    game->player[1].pos = (sfVector2f) {830, 550};
    game->player[1].pos_player_map_x = 2238;
    game->player[1].pos_player_map_y = 2853;
    game->player[1].facing = LEFT;
    game->player[1].is_moving = sfFalse;
    game->player[1].animation_clock = sfClock_create();
    sfSprite_setTexture(game->player[1].player, game->player[1].player_text,
    sfTrue);
    sfSprite_setScale(game->player[1].player, game->player[1].scale);
    sfSprite_setTextureRect(game->player[1].player,
    game->player[1].player_rect);
    sfSprite_setPosition(game->player[1].player, game->player[1].pos);
}

static void init_blue_link(game_t *game)
{
    game->player[2].player = sfSprite_create();
    game->player[2].player_text = sfTexture_createFromFile(BLUE_LINK_ASSETS,
    NULL);
    game->player[2].scale = (sfVector2f) {2.5, 2.5};
    game->player[2].player_rect.height = 28;
    game->player[2].player_rect.left = 7;
    game->player[2].player_rect.top = 216;
    game->player[2].player_rect.width = 24;
    game->player[2].pos = (sfVector2f) {830, 550};
    game->player[2].pos_player_map_x = 2238;
    game->player[2].pos_player_map_y = 2853;
    game->player[2].animation_clock = sfClock_create();
    game->player[2].facing = LEFT;
    game->player[2].is_moving = sfFalse;
    sfSprite_setTexture(game->player[2].player, game->player[2].player_text,
    sfTrue);
    sfSprite_setScale(game->player[2].player, game->player[2].scale);
    sfSprite_setTextureRect(game->player[2].player,
    game->player[2].player_rect);
    sfSprite_setPosition(game->player[2].player, game->player[2].pos);
}

static void init_purple_link(game_t *game)
{
    game->player[3].player = sfSprite_create();
    game->player[3].player_text = sfTexture_createFromFile(PURPLE_LINK_ASSETS,
    NULL);
    game->player[3].scale = (sfVector2f) {2.5, 2.5};
    game->player[3].player_rect.height = 28;
    game->player[3].player_rect.left = 7;
    game->player[3].player_rect.top = 216;
    game->player[3].player_rect.width = 24;
    game->player[3].pos = (sfVector2f) {830, 550};
    game->player[3].pos_player_map_x = 2238;
    game->player[3].pos_player_map_y = 2853;
    game->player[3].animation_clock = sfClock_create();
    game->player[3].facing = LEFT;
    game->player[3].is_moving = sfFalse;
    sfSprite_setTexture(game->player[3].player, game->player[3].player_text,
    sfTrue);
    sfSprite_setScale(game->player[3].player, game->player[3].scale);
    sfSprite_setTextureRect(game->player[3].player,
    game->player[3].player_rect);
    sfSprite_setPosition(game->player[3].player, game->player[3].pos);
}

void init_player_skin(game_t *game)
{
    init_life(game);
    init_animation_fight(game);
    init_green_link(game);
    init_blue_link(game);
    init_red_link(game);
    init_purple_link(game);
}
