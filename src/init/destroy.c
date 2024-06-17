/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** destroy_sprite
*/

#include <stdlib.h>
#include "main.h"

static void destroy_sprite(game_t *game)
{
    for (int i = 0; i != TOTAL_SPRITE; i++) {
        sfSprite_destroy(game->sprite[i].sprite);
        sfTexture_destroy(game->sprite[i].texture);
        sfClock_destroy(game->sprite[i].clock);
    }
    free(game->sprite);
}

static void destroy_player(game_t *game)
{
    for (int i = 0; i != 4; i++) {
        sfSprite_destroy(game->player[i].player);
        sfTexture_destroy(game->player[i].player_text);
        sfClock_destroy(game->player[i].animation_clock);
    }
    free(game->player);
}

static void destroy_map(game_t *game)
{
    for (int i = 0; i != 5; i++) {
        sfSprite_destroy(game->map[i].tile);
        sfTexture_destroy(game->map[i].tile_text);
    }
    sfImage_destroy(game->map[3].image);
    free(game->map);
}

static void destroy_text(game_t *game)
{
    for (int i = 0; i != TOTAL_TEXT; i++) {
        sfText_destroy(game->text[i].text);
        sfFont_destroy(game->text[i].font);
    }
    free(game->text);
}

void destroy(game_t *game)
{
    destroy_sprite(game);
    destroy_player(game);
    destroy_map(game);
    destroy_text(game);
    sfMusic_destroy(game->music.song);
    sfRenderWindow_destroy(game->window->window);
    free(game->sbire);
    free(game->window);
}
