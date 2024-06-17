/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** new_game
*/

#include "main.h"

static void init_life_at_zero(game_t *game)
{
    game->player[0].life = 120;
    game->player[1].life = 120;
    game->player[2].life = 120;
    game->player[3].life = 120;
}

static void init_player_at_zero(game_t *game)
{
    game->player[0].pos = (sfVector2f) {830, 550};
    game->player[0].pos_player_map_x = 2238;
    game->player[0].pos_player_map_y = 2853;
    game->player[0].facing = LEFT;
    sfSprite_setPosition(game->player[0].player, game->player[0].pos);
    game->player[1].pos = (sfVector2f) {830, 550};
    game->player[1].pos_player_map_x = 2238;
    game->player[1].pos_player_map_y = 2853;
    game->player[1].facing = LEFT;
    sfSprite_setPosition(game->player[1].player, game->player[1].pos);
    game->player[2].pos = (sfVector2f) {830, 550};
    game->player[2].pos_player_map_x = 2238;
    game->player[2].pos_player_map_y = 2853;
    game->player[2].facing = LEFT;
    sfSprite_setPosition(game->player[2].player, game->player[2].pos);
    game->player[3].pos = (sfVector2f) {830, 550};
    game->player[3].pos_player_map_x = 2238;
    game->player[3].pos_player_map_y = 2853;
    game->player[3].facing = LEFT;
    sfSprite_setPosition(game->player[3].player, game->player[3].pos);
}

static void init_map_at_zero(game_t *game)
{
    game->map[0].map_rect.left = 514 * 4;
    game->map[0].map_rect.top = 515 * 5;
    sfSprite_setTextureRect(game->map[0].tile, game->map[0].map_rect);
    game->map[1].map_rect.left = 514 * 4;
    game->map[1].map_rect.top = 515 * 5;
    sfSprite_setTextureRect(game->map[1].tile, game->map[1].map_rect);
    game->map[2].map_rect.left = 514 * 4.5;
    game->map[2].map_rect.top = 515 * 5;
    sfSprite_setTextureRect(game->map[2].tile, game->map[2].map_rect);
    game->map[3].map_rect.left = 514 * 4;
    game->map[3].map_rect.top = 515 * 5;
    sfSprite_setTextureRect(game->map[3].tile, game->map[3].map_rect);
    game->map[4].map_rect.left = 514 * 4;
    game->map[4].map_rect.top = 515 * 5;
    sfSprite_setTextureRect(game->map[4].tile, game->map[4].map_rect);
}

void init_all_at_zero(game_t *game)
{
    init_player_at_zero(game);
    init_life_at_zero(game);
    init_map_at_zero(game);
    IMG[QUEST_PNJ_2].active = sfFalse;
    IMG[BACK_START].active = sfTrue;
    IMG[BASIC_HEART].active = sfTrue;
    IMG[PENDENTIF].active = sfFalse;
    IMG[QUEST_BOX].pos = (sfVector2f) {620, 540};
    sfSprite_setPosition(IMG[QUEST_BOX].sprite, IMG[QUEST_BOX].pos);
}
