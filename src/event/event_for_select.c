/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** event_for_select
*/
#include "main.h"

void event_manager(game_t *game)
{
    while (sfRenderWindow_pollEvent(game->window->window,
    &game->window->event)) {
        if (game->window->event.type == sfEvtClosed)
            sfRenderWindow_close(game->window->window);
        select_skin(game);
        click_for_return(game->window, &IMG[BACK_MENU], game);
        animation_button(game);
        left_or_right_selection(game);
        choose_link_with_enter(game);
    }
}
