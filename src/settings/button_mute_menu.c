/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** button_mute_menu
*/

#include "main.h"

static void switch_bool(game_t *game)
{
    if (IMG[SONG_UNMUTE].active == sfFalse) {
        IMG[SONG_UNMUTE].active = sfTrue;
    } else {
        IMG[SONG_UNMUTE].active = sfFalse;
    }
}

sfBool switch_in_menu(game_t *game, sfBool music)
{
    if (IMG[SONG_UNMUTE].active == sfFalse) {
        sfRenderWindow_drawSprite(game->window->window,
        IMG[SONG_UNMUTE].sprite, NULL);
        if (music == sfTrue) {
            music = sfFalse;
            sfMusic_play(game->music.song);
        }
        sfMusic_setVolume(game->music.song, game->music.volume);
        return music;
    } else {
        sfRenderWindow_drawSprite(game->window->window,
        IMG[SONG_MUTE].sprite, NULL);
        music = sfTrue;
        sfMusic_setVolume(game->music.song, 0.00);
        return music;
    }
}

void click_mute(game_t *game)
{
    sfFloatRect hitbox = sfSprite_getGlobalBounds(IMG[SONG_UNMUTE].sprite);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window->window);

    IMG[SONG_UNMUTE].pos = sfSprite_getPosition(IMG[SONG_UNMUTE].sprite);
    if (game->window->event.type == sfEvtMouseButtonPressed) {
        if (mouse.x >= (hitbox.left + 2) && mouse.x <= ((hitbox.left + 2) +
        hitbox.width) && mouse.y >= (hitbox.top + 35) && mouse.y <=
        ((hitbox.top + 35) + hitbox.height)) {
            switch_bool(game);
        }
    }
}
