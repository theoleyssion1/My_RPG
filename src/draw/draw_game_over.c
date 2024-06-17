/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** draw_game_over
*/

#include "main.h"

void draw_game_over(game_t *game)
{
    if (IMG[RESTART].active == sfTrue) {
        sfRenderWindow_drawSprite(game->window->window,
        IMG[RESTART_2].sprite, NULL);
    } else {
        sfRenderWindow_drawSprite(game->window->window,
        IMG[RESTART].sprite, NULL);
    }
    if (IMG[QUIT_BUTTON_IN_GAME].active == sfTrue) {
        sfRenderWindow_drawSprite(game->window->window,
        IMG[QUIT_BUTTON_IN_GAME_2].sprite, NULL);
    } else {
        sfRenderWindow_drawSprite(game->window->window,
        IMG[QUIT_BUTTON_IN_GAME].sprite, NULL);
    }
}
