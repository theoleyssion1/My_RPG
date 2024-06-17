/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** menu_in_game
*/

#include "main.h"

void press_escape_in_game(game_t *game)
{
    if (game->window->event.type == sfEvtKeyPressed &&
        game->window->event.key.code == sfKeyEscape) {
            loop_pause(game);
        }
}
