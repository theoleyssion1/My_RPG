/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** loop
*/
#include "main.h"

void loop_select(game_t *game)
{
    IMG[NAVI_SPRITE].active = sfFalse;
    init_all_at_zero(game);
    sfRenderWindow_clear(game->window->window, sfWhite);
    while (sfRenderWindow_isOpen(game->window->window)) {
        event_manager(game);
        draw_select_skin(game);
        sfRenderWindow_display(game->window->window);
    }
}

void loop_start(game_t *game)
{
    while (sfRenderWindow_isOpen(game->window->window)) {
        event_manager_start(game);
        draw_start_game(game);
        sfRenderWindow_display(game->window->window);
    }
}

void loop_game(game_t *game)
{
    sfRenderWindow_clear(game->window->window, sfWhite);
    while (sfRenderWindow_isOpen(game->window->window)) {
        event_manager_player(game);
        map_movement_axis_y(game);
        verif_click_event(game);
        sfRenderWindow_clear(game->window->window, sfBlack);
        draw_game(game);
        sfRenderWindow_display(game->window->window);
    }
}

void loop_menu(game_t *game)
{
    sfBool music = sfFalse;

    IMG[NAVI_SPRITE].active = sfFalse;
    sfRenderWindow_clear(game->window->window, sfWhite);
    while (sfRenderWindow_isOpen(game->window->window)) {
        event_manager_menu(game);
        sfRenderWindow_clear(game->window->window, sfBlue);
        sfRenderWindow_drawSprite(game->window->window,
        IMG[MENU_BAC].sprite, NULL);
        music = switch_in_menu(game, music);
        draw_menu_button(game);
        sfRenderWindow_display(game->window->window);
    }
}

void loop_menu_in_game(game_t *game)
{
    sfBool music = sfFalse;

    sfRenderWindow_clear(game->window->window, sfWhite);
    while (sfRenderWindow_isOpen(game->window->window)) {
        event_manager_menu_in_game(game);
        sfRenderWindow_clear(game->window->window, sfBlue);
        sfRenderWindow_drawSprite(game->window->window,
        IMG[MENU_BAC].sprite, NULL);
        music = switch_in_menu(game, music);
        draw_menu_in_game(game);
        sfRenderWindow_display(game->window->window);
    }
}
