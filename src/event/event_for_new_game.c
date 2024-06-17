/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** event_for_new_game
*/

#include "main.h"

static void button_action(game_t *game, int i)
{
    if (i == NEW_GAME && game->window->event.type ==
        sfEvtMouseButtonPressed) {
        loop_select(game);
    }
    if (i == LOAD_GAME && game->window->event.type ==
        sfEvtMouseButtonPressed) {
        load_file(game);
        loop_game(game);
    }
}

static void animation_for_button(game_t *game, int i)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window->window);
    sfFloatRect hitbox = sfSprite_getGlobalBounds(IMG[i].sprite);

    if (mouse.x >= (hitbox.left) && mouse.x <= ((hitbox.left) +
        hitbox.width) && mouse.y >= (hitbox.top) && mouse.y <=
        ((hitbox.top) + hitbox.height)) {
        game->sprite[i].active = sfTrue;
        button_action(game, i);
    } else {
        game->sprite[i].active = sfFalse;
    }
}

void event_manager_new_game(game_t *game)
{
    while (sfRenderWindow_pollEvent(game->window->window,
    &game->window->event)) {
        if (game->window->event.type == sfEvtClosed)
            sfRenderWindow_close(game->window->window);
        click_for_return(game->window, &IMG[BACK_MENU], game);
        animation_button(game);
        change_window_mode(game);
        animation_for_button(game, NEW_GAME);
        animation_for_button(game, LOAD_GAME);
    }
}
