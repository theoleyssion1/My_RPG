/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** event_for_pause
*/

#include "main.h"

static void button_action(game_t *game, int i)
{
    if (i == QUIT_BUTTON_IN_GAME && game->window->event.type ==
        sfEvtMouseButtonPressed) {
        loop_start(game);
    }
    if (i == SAVE_BUTTON && game->window->event.type ==
        sfEvtMouseButtonPressed) {
        save_info(game);
    }
    if (i == RESUME_BUTTON && game->window->event.type ==
        sfEvtMouseButtonPressed) {
        loop_game(game);
    }
    if (i == MENU_PAUSE && game->window->event.type ==
        sfEvtMouseButtonPressed) {
        loop_menu_in_game(game);
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

void event_manager_pause(game_t *game)
{
    while (sfRenderWindow_pollEvent(game->window->window,
    &game->window->event)) {
        if (game->window->event.type == sfEvtClosed)
            sfRenderWindow_close(game->window->window);
        click_for_return_in_game(game->window, &IMG[BACK_MENU], game);
        animation_button(game);
        animation_for_button(game, RESUME_BUTTON);
        animation_for_button(game, SAVE_BUTTON);
        animation_for_button(game, MENU_PAUSE);
        animation_for_button(game, QUIT_BUTTON_IN_GAME);
    }
}
