/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** drawn_new_game
*/

#include "main.h"

void draw_new_game(game_t *game)
{
    sfRenderWindow_clear(game->window->window, sfBlue);
    sfRenderWindow_drawSprite(game->window->window,
    IMG[SELECT_BACK].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    IMG[BACK_MENU].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    IMG[LOGO].sprite, NULL);
    if (IMG[LOAD_GAME].active == sfTrue) {
        sfRenderWindow_drawSprite(game->window->window,
        IMG[LOAD_GAME_2].sprite, NULL);
    } else {
        sfRenderWindow_drawSprite(game->window->window,
        IMG[LOAD_GAME].sprite, NULL);
    }
    if (IMG[NEW_GAME].active == sfTrue)
        sfRenderWindow_drawSprite(game->window->window,
        IMG[NEW_GAME_2].sprite, NULL);
    else
        sfRenderWindow_drawSprite(game->window->window,
        IMG[NEW_GAME].sprite, NULL);
}
