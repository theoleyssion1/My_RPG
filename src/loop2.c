/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** loop2
*/

#include "main.h"

void loop_pause(game_t *game)
{
    IMG[QUIT_BUTTON_IN_GAME].pos = (sfVector2f) {830, 800};
    IMG[QUIT_BUTTON_IN_GAME_2].pos = (sfVector2f) {830, 800};
    sfSprite_setPosition(IMG[QUIT_BUTTON_IN_GAME].sprite,
    IMG[QUIT_BUTTON_IN_GAME].pos);
    sfSprite_setPosition(IMG[QUIT_BUTTON_IN_GAME_2].sprite,
    IMG[QUIT_BUTTON_IN_GAME_2].pos);
    sfRenderWindow_clear(game->window->window, sfWhite);
    while (sfRenderWindow_isOpen(game->window->window)) {
        event_manager_pause(game);
        sfRenderWindow_clear(game->window->window, sfBlue);
        sfRenderWindow_drawSprite(game->window->window,
        IMG[SELECT_BACK].sprite, NULL);
        draw_menu_pause(game);
        sfRenderWindow_display(game->window->window);
    }
}

void loop_new_game(game_t *game)
{
    sfRenderWindow_clear(game->window->window, sfWhite);
    while (sfRenderWindow_isOpen(game->window->window)) {
        event_manager_new_game(game);
        sfRenderWindow_clear(game->window->window, sfBlue);
        sfRenderWindow_drawSprite(game->window->window,
        IMG[SELECT_BACK].sprite, NULL);
        draw_new_game(game);
        sfRenderWindow_display(game->window->window);
    }
}

void loop_game_over(game_t *game)
{
    game->player->life = 120;
    IMG[QUIT_BUTTON_IN_GAME].pos = (sfVector2f) {1100, 700};
    IMG[QUIT_BUTTON_IN_GAME_2].pos = (sfVector2f) {1100, 700};
    sfSprite_setPosition(IMG[QUIT_BUTTON_IN_GAME].sprite,
    IMG[QUIT_BUTTON_IN_GAME].pos);
    sfSprite_setPosition(IMG[QUIT_BUTTON_IN_GAME_2].sprite,
    IMG[QUIT_BUTTON_IN_GAME_2].pos);
    sfRenderWindow_clear(game->window->window, sfWhite);
    while (sfRenderWindow_isOpen(game->window->window)) {
        event_game_over(game);
        sfRenderWindow_clear(game->window->window, sfBlack);
        sfRenderWindow_drawSprite(game->window->window,
        IMG[GAME_OVER].sprite, NULL);
        draw_game_over(game);
        sfRenderWindow_display(game->window->window);
    }
}
