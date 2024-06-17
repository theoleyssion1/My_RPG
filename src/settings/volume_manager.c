/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** volume_manager
*/

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void dim_volume(game_t *game)
{
    if (sfMusic_getVolume(game->music.song) < 0)
        sfMusic_setVolume(game->music.song, 0);
    if (sfMusic_getVolume(game->music.song) != 0) {
        game->music.volume = sfMusic_getVolume(game->music.song) - 20.00;
        sfMusic_setVolume(game->music.song,
        sfMusic_getVolume(game->music.song) - 20.00);
    }
}

static void aug_volume(game_t *game)
{
    if (sfMusic_getVolume(game->music.song) > 100)
        sfMusic_setVolume(game->music.song, 100);
    if (sfMusic_getVolume(game->music.song) != 100) {
        game->music.volume = sfMusic_getVolume(game->music.song) + 20.00;
        sfMusic_setVolume(game->music.song,
        sfMusic_getVolume(game->music.song) + 20.00);
    }
}

void click_min(game_t *game)
{
    sfFloatRect hitbox = sfSprite_getGlobalBounds(IMG[SONG_MOINS].sprite);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window->window);

    IMG[SONG_MOINS].pos = sfSprite_getPosition(IMG[SONG_MOINS].sprite);
    if (game->window->event.type == sfEvtMouseButtonPressed) {
        if (mouse.x >= (hitbox.left) && mouse.x <= ((hitbox.left) +
        hitbox.width) && mouse.y >= (hitbox.top) && mouse.y <=
        ((hitbox.top) + hitbox.height)) {
            dim_volume(game);
        }
    }
}

void click_max(game_t *game)
{
    sfFloatRect hitbox = sfSprite_getGlobalBounds(IMG[SONG_PLUS].sprite);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window->window);

    IMG[SONG_PLUS].pos = sfSprite_getPosition(IMG[SONG_PLUS].sprite);
    if (game->window->event.type == sfEvtMouseButtonPressed) {
        if (mouse.x >= (hitbox.left + 2) && mouse.x <= ((hitbox.left + 2) +
        hitbox.width) && mouse.y >= (hitbox.top) && mouse.y <=
        ((hitbox.top) + hitbox.height)) {
            aug_volume(game);
        }
    }
}
