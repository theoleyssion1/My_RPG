/*
** EPITECH PROJECT, 2024
** map_colision
** File description:
** map_colision
*/

#include "main.h"

static int check_color(sfColor pixel)
{
    if (pixel.r == 255 && pixel.g == 255 && pixel.b == 255)
        return 1;
    return 0;
}

static int colision_up(game_t *game, int pos_origin_x, int pos_origin_y)
{
    sfColor pixel;
    int result = 0;

    pos_origin_x = pos_origin_x + 11;
    pos_origin_y = pos_origin_y + 19;
    for (int y = pos_origin_y; y < pos_origin_y + 4; y += 1) {
        for (int x = pos_origin_x; x < pos_origin_x + 6; x += 1) {
            pixel = sfImage_getPixel(game->map[3].image,
            x, y);
            result += check_color(pixel);
        }
    }
    if (result >= 24)
        return 1;
    return 0;
}

static int colision_down(game_t *game, int pos_origin_x, int pos_origin_y)
{
    sfColor pixel;
    int result = 0;

    pos_origin_x = pos_origin_x + 11;
    pos_origin_y = pos_origin_y + 31;
    for (int y = pos_origin_y; y < pos_origin_y + 4; y += 1) {
        for (int x = pos_origin_x; x < pos_origin_x + 6; x += 1) {
            pixel = sfImage_getPixel(game->map[3].image,
            x, y);
            result += check_color(pixel);
        }
    }
    if (result >= 24)
        return 1;
    return 0;
}

static int colision_left(game_t *game, int pos_origin_x, int pos_origin_y)
{
    sfColor pixel;
    int result = 0;

    pos_origin_x = pos_origin_x - 5;
    pos_origin_y = pos_origin_y + 22;
    for (int y = pos_origin_y; y < pos_origin_y + 9; y += 1) {
        for (int x = pos_origin_x; x < pos_origin_x + 4; x += 1) {
            pixel = sfImage_getPixel(game->map[3].image,
            x, y);
            result += check_color(pixel);
        }
    }
    if (result >= 36)
        return 1;
    return 0;
}

static int colision_right(game_t *game, int pos_origin_x, int pos_origin_y)
{
    sfColor pixel;
    int result = 0;

    pos_origin_x = pos_origin_x + 23;
    pos_origin_y = pos_origin_y + 22;
    for (int y = pos_origin_y; y < pos_origin_y + 9; y += 1) {
        for (int x = pos_origin_x; x < pos_origin_x + 4; x += 1) {
            pixel = sfImage_getPixel(game->map[3].image,
            x, y);
            result += check_color(pixel);
        }
    }
    if (result >= 36)
        return 1;
    return 0;
}

int map_colision_y(game_t *game)
{
    if (PLAYER.facing == UP) {
        if (colision_up(game, PLAYER.pos_player_map_x,
        PLAYER.pos_player_map_y) == 1)
            return 1;
    }
    if (PLAYER.facing == DOWN) {
        if (colision_down(game, PLAYER.pos_player_map_x,
        PLAYER.pos_player_map_y) == 1)
            return 2;
    }
    return 0;
}

int map_colision_x(game_t *game)
{
    if (PLAYER.facing == LEFT) {
        if (colision_left(game, PLAYER.pos_player_map_x,
        PLAYER.pos_player_map_y) == 1)
            return 3;
    }
    if (PLAYER.facing == RIGHT) {
        if (colision_right(game, PLAYER.pos_player_map_x,
        PLAYER.pos_player_map_y) == 1)
            return 4;
    }
    return 0;
}
