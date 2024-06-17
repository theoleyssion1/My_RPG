/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** menu
*/
#include "main.h"

static void check_bool(game_t *game)
{
    if (IMG[BUTTON_WINDOW].active == sfTrue) {
        sfRenderWindow_setSize(game->window->window, (sfVector2u){1080, 720});
        for (int i = 0; i != TOTAL_SPRITE; i++) {
            IMG[i].pos = resize_low_window(&IMG[i]);
            sfSprite_setPosition(IMG[i].sprite, IMG[i].pos);
        }
        IMG[BUTTON_WINDOW].active = sfFalse;
        return;
    }
    if (IMG[BUTTON_WINDOW].active == sfFalse) {
        sfRenderWindow_setSize(game->window->window, (sfVector2u){1920, 1080});
        for (int i = 0; i != TOTAL_SPRITE; i++) {
            IMG[i].pos = resize_high_window(&IMG[i]);
            sfSprite_setPosition(IMG[i].sprite, IMG[i].pos);
        }
        IMG[BUTTON_WINDOW].active = sfTrue;
        return;
    }
}

void change_window_mode(game_t *game)
{
    sfFloatRect hitbox = sfSprite_getGlobalBounds(IMG[BUTTON_WINDOW].sprite);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window->window);

    if (game->window->event.type == sfEvtMouseButtonPressed) {
        if (mouse.x >= (hitbox.left) && mouse.x <= ((hitbox.left) +
        hitbox.width) && mouse.y >= (hitbox.top) && mouse.y <=
        ((hitbox.top) + hitbox.height)) {
            check_bool(game);
        }
    }
}
