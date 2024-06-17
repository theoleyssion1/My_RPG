/*
** EPITECH PROJECT, 2024
** map
** File description:
** map
*/

#include <stdlib.h>
#include "main.h"

void init_map(game_t *game)
{
    game->map = malloc(sizeof(map_t) * 5);
    game->map[0].tile = sfSprite_create();
    game->map[0].tile_text = sfTexture_createFromFile(MAP_ASSETS, NULL);
    game->map[0].scale = (sfVector2f) {1.98, 1.98};
    game->map[0].map_rect.height = 511;
    game->map[0].map_rect.left = 514 * 4;
    game->map[0].map_rect.top = 514 * 5;
    game->map[0].map_rect.width = 512;
    game->map[0].pos = (sfVector2f) {480, 0};
    sfSprite_setTexture(game->map[0].tile, game->map[0].tile_text, sfTrue);
    sfSprite_setScale(game->map[0].tile, game->map[0].scale);
    sfSprite_setTextureRect(game->map[0].tile, game->map[0].map_rect);
    sfSprite_setPosition(game->map[0].tile, game->map[0].pos);
}

void init_map_background_left(game_t *game)
{
    game->map[1].tile = sfSprite_create();
    game->map[1].tile_text = sfTexture_createFromFile(MAP_BLUR_ASSETS, NULL);
    game->map[1].scale = (sfVector2f) {1.98, 1.98};
    game->map[1].map_rect.height = 511;
    game->map[1].map_rect.left = 514 * 4;
    game->map[1].map_rect.top = 514 * 5;
    game->map[1].map_rect.width = 256;
    game->map[1].pos = (sfVector2f) {0, 0};
    sfSprite_setTexture(game->map[1].tile, game->map[1].tile_text, sfTrue);
    sfSprite_setScale(game->map[1].tile, game->map[1].scale);
    sfSprite_setTextureRect(game->map[1].tile, game->map[1].map_rect);
    sfSprite_setPosition(game->map[1].tile, game->map[1].pos);
}

void init_map_background_right(game_t *game)
{
    game->map[2].tile = sfSprite_create();
    game->map[2].tile_text = sfTexture_createFromFile(MAP_BLUR_ASSETS, NULL);
    game->map[2].scale = (sfVector2f) {1.98, 1.98};
    game->map[2].map_rect.height = 511;
    game->map[2].map_rect.left = 514 * 4.5;
    game->map[2].map_rect.top = 514 * 5;
    game->map[2].map_rect.width = 256;
    game->map[2].pos = (sfVector2f) {1456, 0};
    sfSprite_setTexture(game->map[2].tile, game->map[2].tile_text, sfTrue);
    sfSprite_setScale(game->map[2].tile, game->map[2].scale);
    sfSprite_setTextureRect(game->map[2].tile, game->map[2].map_rect);
    sfSprite_setPosition(game->map[2].tile, game->map[2].pos);
}

void init_colision(game_t *game)
{
    game->map[3].tile = sfSprite_create();
    game->map[3].tile_text = sfTexture_createFromFile(COLISION_ASSETS,
    NULL);
    game->map[3].image = sfImage_createFromFile(COLISION_ASSETS);
    game->map[3].scale = (sfVector2f) {1.98, 1.98};
    game->map[3].map_rect.height = 512;
    game->map[3].map_rect.left = 514 * 4;
    game->map[3].map_rect.top = 514 * 5;
    game->map[3].map_rect.width = 513;
    game->map[3].pos = (sfVector2f) {480, 0};
    sfSprite_setTexture(game->map[3].tile, game->map[3].tile_text, sfTrue);
    sfSprite_setScale(game->map[3].tile, game->map[3].scale);
    sfSprite_setTextureRect(game->map[3].tile, game->map[3].map_rect);
    sfSprite_setPosition(game->map[3].tile, game->map[3].pos);
}

void init_arches(game_t *game)
{
    game->map[4].tile = sfSprite_create();
    game->map[4].tile_text = sfTexture_createFromFile(ARCHES_ASSETS, NULL);
    game->map[4].scale = (sfVector2f) {1.98, 1.98};
    game->map[4].map_rect.height = 512;
    game->map[4].map_rect.left = 514 * 4;
    game->map[4].map_rect.top = 514 * 5;
    game->map[4].map_rect.width = 513;
    game->map[4].pos = (sfVector2f) {480, 0};
    sfSprite_setTexture(game->map[4].tile, game->map[4].tile_text, sfTrue);
    sfSprite_setScale(game->map[4].tile, game->map[4].scale);
    sfSprite_setTextureRect(game->map[4].tile, game->map[4].map_rect);
    sfSprite_setPosition(game->map[4].tile, game->map[4].pos);
}
