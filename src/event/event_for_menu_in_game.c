/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** event_for_menu_in_game
*/

#include "main.h"

void event_manager_menu_in_game(game_t *game)
{
    while (sfRenderWindow_pollEvent(game->window->window,
    &game->window->event)) {
        if (game->window->event.type == sfEvtClosed)
            sfRenderWindow_close(game->window->window);
        click_for_return_in_pause(game->window, &IMG[BACK_MENU], game);
        animation_button(game);
        click_mute(game);
        click_max(game);
        click_min(game);
        click_navi(game);
        change_window_mode(game);
    }
    navi_animation(&IMG[NAVI_SPRITE]);
}
