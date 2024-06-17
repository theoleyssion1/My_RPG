/*
** EPITECH PROJECT, 2024
** window
** File description:
** window
*/
#include "main.h"
#include <stdlib.h>

void create_win(game_t *game)
{
    game->window = malloc(sizeof(window_t));
    game->window->videomode.bitsPerPixel = 32;
    game->window->videomode.height = 1080;
    game->window->videomode.width = 1920;
    game->window->window = sfRenderWindow_create(game->window->videomode,
    "The_Legend_Of_Zeldo", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(game->window->window, 60);
}
