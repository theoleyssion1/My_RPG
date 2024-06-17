/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** quit_button
*/
#include "main.h"

void click_for_quit(window_t *win, sprite_t *sprite)
{
    sfFloatRect hitbox = sfSprite_getGlobalBounds(sprite->sprite);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(win->window);

    sprite->pos = sfSprite_getPosition(sprite->sprite);
    if (win->event.type == sfEvtMouseButtonPressed) {
        if (mouse.x >= (hitbox.left + 18) && mouse.x <= ((hitbox.left + 18) +
        hitbox.width) && mouse.y >= (hitbox.top + 35) && mouse.y <=
        ((hitbox.top + 35) + hitbox.height)) {
            sfRenderWindow_close(win->window);
        }
    }
}

void click_for_return(window_t *win, sprite_t *sprite, game_t *game)
{
    sfFloatRect hitbox = sfSprite_getGlobalBounds(sprite->sprite);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(win->window);

    sprite->pos = sfSprite_getPosition(sprite->sprite);
    if (win->event.type == sfEvtMouseButtonPressed) {
        if (mouse.x >= (hitbox.left + 18) && mouse.x <= ((hitbox.left + 18) +
        hitbox.width) && mouse.y >= (hitbox.top + 35) && mouse.y <=
        ((hitbox.top + 35) + hitbox.height)) {
            IMG[NAVI_SPRITE].active = sfFalse;
            loop_start(game);
        }
    }
}

void click_for_return_in_game(window_t *win, sprite_t *sprite, game_t *game)
{
    sfFloatRect hitbox = sfSprite_getGlobalBounds(sprite->sprite);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(win->window);

    sprite->pos = sfSprite_getPosition(sprite->sprite);
    if (win->event.type == sfEvtMouseButtonPressed) {
        if (mouse.x >= (hitbox.left + 18) && mouse.x <= ((hitbox.left + 18) +
        hitbox.width) && mouse.y >= (hitbox.top + 35) && mouse.y <=
        ((hitbox.top + 35) + hitbox.height)) {
            loop_game(game);
        }
    }
}

void click_for_return_in_pause(window_t *win, sprite_t *sprite, game_t *game)
{
    sfFloatRect hitbox = sfSprite_getGlobalBounds(sprite->sprite);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(win->window);

    sprite->pos = sfSprite_getPosition(sprite->sprite);
    if (win->event.type == sfEvtMouseButtonPressed) {
        if (mouse.x >= (hitbox.left + 18) && mouse.x <= ((hitbox.left + 18) +
        hitbox.width) && mouse.y >= (hitbox.top + 35) && mouse.y <=
        ((hitbox.top + 35) + hitbox.height)) {
            IMG[NAVI_SPRITE].active = sfFalse;
            loop_pause(game);
        }
    }
}
