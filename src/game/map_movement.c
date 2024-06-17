/*
** EPITECH PROJECT, 2024
** map_movement
** File description:
** map_movement
*/

#include <stdio.h>
#include "main.h"

static void map_movement_axis_x(game_t *game)
{
    if (PLAYER.pos.x <= 480 && game->map[0].map_rect.left > 0) {
        game->map[0].map_rect.left -= 514;
        game->map[1].map_rect.left -= 514;
        game->map[2].map_rect.left -= 514;
        game->map[3].map_rect.left -= 514;
        game->map[4].map_rect.left -= 514;
        PLAYER.pos.x = 1428;
        PLAYER.pos_player_map_x = PLAYER.pos_player_map_x - 36.118652;
    }
    if (PLAYER.pos.x >= 1430 && game->map[0].map_rect.left < 3110) {
        game->map[0].map_rect.left += 514;
        game->map[1].map_rect.left += 514;
        game->map[2].map_rect.left += 514;
        game->map[3].map_rect.left += 514;
        game->map[4].map_rect.left += 514;
        PLAYER.pos.x = 482;
        PLAYER.pos_player_map_x = PLAYER.pos_player_map_x + 35.52002;
    }
    map_update(game);
}

void map_movement_axis_y(game_t *game)
{
    PLAYER.pos = sfSprite_getPosition(PLAYER.player);
    if (PLAYER.pos.y >= 950 && game->map[0].map_rect.top < 3116) {
        game->map[0].map_rect.top += 514;
        game->map[1].map_rect.top += 514;
        game->map[2].map_rect.top += 514;
        game->map[3].map_rect.top += 514;
        game->map[4].map_rect.top += 514;
        PLAYER.pos.y = 1;
        PLAYER.pos_player_map_y = PLAYER.pos_player_map_y + 36.358497;
    }
    if (PLAYER.pos.y <= 0 && game->map[0].map_rect.top > 5) {
        game->map[0].map_rect.top -= 514;
        game->map[1].map_rect.top -= 514;
        game->map[2].map_rect.top -= 514;
        game->map[3].map_rect.top -= 514;
        game->map[4].map_rect.top -= 514;
        PLAYER.pos.y = 932;
        PLAYER.pos_player_map_y = PLAYER.pos_player_map_y - 43.958497;
    }
    map_movement_axis_x(game);
}

void map_update(game_t *game)
{
    sfSprite_setTextureRect(game->map[0].tile, game->map[0].map_rect);
    sfSprite_setTextureRect(game->map[1].tile, game->map[1].map_rect);
    sfSprite_setTextureRect(game->map[2].tile, game->map[2].map_rect);
    sfSprite_setTextureRect(game->map[3].tile, game->map[3].map_rect);
    sfSprite_setTextureRect(game->map[4].tile, game->map[4].map_rect);
    sfSprite_setPosition(PLAYER.player, PLAYER.pos);
}
