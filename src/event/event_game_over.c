/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** event_game_over
*/

#include "main.h"

static void button_action(game_t *game, int i)
{
    if (i == RESTART && game->window->event.type ==
        sfEvtMouseButtonPressed) {
        init_all_at_zero(game);
        loop_game(game);
    }
    if (i == QUIT_BUTTON_IN_GAME && game->window->event.type ==
        sfEvtMouseButtonPressed) {
        loop_start(game);
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

void event_game_over(game_t *game)
{
    while (sfRenderWindow_pollEvent(game->window->window,
    &game->window->event)) {
        if (game->window->event.type == sfEvtClosed)
            sfRenderWindow_close(game->window->window);
        animation_for_button(game, RESTART);
        animation_for_button(game, QUIT_BUTTON_IN_GAME);
    }
}
