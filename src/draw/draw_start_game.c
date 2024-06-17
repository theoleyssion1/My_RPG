/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** draw_start_game
*/
#include "main.h"

static void draw_navi(game_t *game)
{
    if (IMG[NAVI_SPRITE].active == sfTrue) {
        sfRenderWindow_drawSprite(game->window->window,
        IMG[DIALOGUE_BOX].sprite, NULL);
        sfRenderWindow_drawText(game->window->window,
        game->text[0].text, NULL);
    }
    sfRenderWindow_drawSprite(game->window->window,
    IMG[NAVI_SPRITE].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    IMG[HELP_BUBBLE].sprite, NULL);
}

void draw_start_game(game_t *game)
{
    sfRenderWindow_drawSprite(game->window->window,
    IMG[BACK_START].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    IMG[START_BUTTON].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    IMG[MENU_BUT].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    IMG[QUIT_BUTTON].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    IMG[LOGO].sprite, NULL);
    draw_navi(game);
}
