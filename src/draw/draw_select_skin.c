/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** draw_select_skin
*/
#include "main.h"

void draw_select_skin(game_t *game)
{
    sfRenderWindow_clear(game->window->window, sfBlue);
    sfRenderWindow_drawSprite(game->window->window,
    IMG[SELECT_BACK].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    IMG[GREEN_LINK].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    IMG[BLUE_LINK].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    IMG[RED_LINK].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    IMG[PURPLE_LINK].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    IMG[BACK_MENU].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    IMG[SELECT_ARROW].sprite, NULL);
}
