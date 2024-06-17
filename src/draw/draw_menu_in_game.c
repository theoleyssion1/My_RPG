/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** draw_menu_in_game
*/

#include "main.h"

static void draw_navi(game_t *game)
{
    if (IMG[NAVI_SPRITE].active == sfTrue) {
        sfRenderWindow_drawSprite(game->window->window,
        IMG[DIALOGUE_BOX].sprite, NULL);
        sfRenderWindow_drawText(game->window->window,
        game->text->text, NULL);
    }
    sfRenderWindow_drawSprite(game->window->window,
    IMG[NAVI_SPRITE].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    IMG[HELP_BUBBLE].sprite, NULL);
}

void draw_menu_in_game(game_t *game)
{
    sfRenderWindow_drawSprite(game->window->window,
    game->map[1].tile, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    game->map[2].tile, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    IMG[SONG_MOINS].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    IMG[SONG_PLUS].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    IMG[BACK_MENU].sprite, NULL);
    draw_navi(game);
}
