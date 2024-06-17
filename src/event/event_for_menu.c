/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** event_for_menu
*/
#include "main.h"
void event_manager_menu(game_t *game)
{
    while (sfRenderWindow_pollEvent(game->window->window,
    &game->window->event)) {
        if (game->window->event.type == sfEvtClosed)
            sfRenderWindow_close(game->window->window);
        click_for_return(game->window, &IMG[BACK_MENU], game);
        animation_button(game);
        click_mute(game);
        click_max(game);
        click_min(game);
        change_window_mode(game);
    }
}
