/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** song_setup
*/

#include "main.h"
#include <stdlib.h>

void song_setup(game_t *game)
{
    game->music.song = sfMusic_createFromFile(SONG_MAIN_MENU);
    game->music.volume = 100;
    sfMusic_setVolume(game->music.song, 100);
}
