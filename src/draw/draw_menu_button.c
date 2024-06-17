/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** draw_menu_button
*/
#include "main.h"

void draw_menu_button(game_t *game)
{
    sfRenderWindow_drawSprite(game->window->window,
    IMG[SONG_MOINS].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    IMG[SONG_PLUS].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    IMG[BACK_MENU].sprite, NULL);
}
