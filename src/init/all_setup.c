/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** mainmenu_setup
*/
#include "main.h"

void all_setup(game_t *game)
{
    game->mouse = sfMouse_getPositionRenderWindow(game->window->window);
    init_all_sprite(game);
    song_setup(game);
    init_map(game);
    init_map_background_left(game);
    init_map_background_right(game);
    init_colision(game);
    init_arches(game);
    init_text(game);
}
