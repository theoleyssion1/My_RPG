/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** draw_pause
*/

#include "main.h"

static void draw_if(game_t *game)
{
    if (IMG[QUIT_BUTTON_IN_GAME].active == sfTrue) {
        sfRenderWindow_drawSprite(game->window->window,
        IMG[QUIT_BUTTON_IN_GAME_2].sprite, NULL);
    } else {
        sfRenderWindow_drawSprite(game->window->window,
        IMG[QUIT_BUTTON_IN_GAME].sprite, NULL);
    }
    if (IMG[SAVE_BUTTON].active == sfTrue) {
        sfRenderWindow_drawSprite(game->window->window,
        IMG[SAVE_BUTTON_2].sprite, NULL);
    } else {
        sfRenderWindow_drawSprite(game->window->window,
        IMG[SAVE_BUTTON].sprite, NULL);
    }
}

void draw_menu_pause(game_t *game)
{
    sfRenderWindow_drawSprite(game->window->window,
    game->map[1].tile, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    game->map[2].tile, NULL);
    if (IMG[RESUME_BUTTON].active == sfTrue) {
        sfRenderWindow_drawSprite(game->window->window,
        IMG[RESUME_BUTTON_2].sprite, NULL);
    } else {
        sfRenderWindow_drawSprite(game->window->window,
        IMG[RESUME_BUTTON].sprite, NULL);
    }
    if (IMG[MENU_PAUSE].active == sfTrue)
        sfRenderWindow_drawSprite(game->window->window,
        IMG[MENU_PAUSE_2].sprite, NULL);
    else
        sfRenderWindow_drawSprite(game->window->window,
        IMG[MENU_PAUSE].sprite, NULL);
    draw_if(game);
    sfRenderWindow_drawSprite(game->window->window,
    IMG[BACK_MENU].sprite, NULL);
}
