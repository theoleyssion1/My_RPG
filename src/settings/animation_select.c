/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** animation_select
*/
#include "main.h"
#include <stdio.h>

static void animation_arrow(game_t *game)
{
    sfFloatRect hitbox_blue =
    sfSprite_getGlobalBounds(IMG[BLUE_LINK].sprite);
    sfFloatRect hitbox_purple =
    sfSprite_getGlobalBounds(IMG[PURPLE_LINK].sprite);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window->window);

    if (mouse.x >= (hitbox_blue.left + 2) && mouse.x <= ((hitbox_blue.left
    + 2) + hitbox_blue.width) && mouse.y >= (hitbox_blue.top + 35) && mouse.y
    <= ((hitbox_blue.top + 35) + hitbox_blue.height)) {
        IMG[SELECT_ARROW].pos = (sfVector2f) {730, 300};
        sfSprite_setPosition(IMG[SELECT_ARROW].sprite, IMG[SELECT_ARROW].pos);
    }
    if (mouse.x >= (hitbox_purple.left + 2) && mouse.x <= ((hitbox_purple.left
    + 2) + hitbox_purple.width) && mouse.y >= (hitbox_purple.top +
    35) && mouse.y <= ((hitbox_purple.top + 35) + hitbox_purple.height)) {
        IMG[SELECT_ARROW].pos = (sfVector2f) {1530, 300};
        sfSprite_setPosition(IMG[SELECT_ARROW].sprite, IMG[SELECT_ARROW].pos);
    }
}

void select_skin(game_t *game)
{
    sfFloatRect hitbox_green =
    sfSprite_getGlobalBounds(IMG[GREEN_LINK].sprite);
    sfFloatRect hitbox_red = sfSprite_getGlobalBounds(IMG[RED_LINK].sprite);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window->window);

    if (mouse.x >= (hitbox_green.left + 2) && mouse.x <= ((hitbox_green.left +
    2) + hitbox_green.width) && mouse.y >= (hitbox_green.top + 35)
    && mouse.y <= ((hitbox_green.top + 35) + hitbox_green.height)) {
        IMG[SELECT_ARROW].pos = (sfVector2f) {330, 300};
        sfSprite_setPosition(IMG[SELECT_ARROW].sprite, IMG[SELECT_ARROW].pos);
    }
    if (mouse.x >= (hitbox_red.left + 2) && mouse.x <= ((hitbox_red.left + 2) +
    hitbox_red.width) && mouse.y >= (hitbox_red.top + 35) && mouse.y <=
    ((hitbox_red.top + 35) + hitbox_red.height)) {
        IMG[SELECT_ARROW].pos = (sfVector2f) {1130, 300};
        sfSprite_setPosition(IMG[SELECT_ARROW].sprite, IMG[SELECT_ARROW].pos);
    }
    animation_arrow(game);
}

static void left_selection(game_t *game)
{
    if (IMG[SELECT_ARROW].pos.x == 730 && game->window->event.type ==
    sfEvtKeyPressed && (game->window->event.key.code == sfKeyQ ||
    game->window->event.key.code == sfKeyLeft)) {
        IMG[SELECT_ARROW].pos = (sfVector2f) {330, 300};
        sfSprite_setPosition(IMG[SELECT_ARROW].sprite, IMG[SELECT_ARROW].pos);
    }
    if (IMG[SELECT_ARROW].pos.x == 1130 && game->window->event.type ==
    sfEvtKeyPressed && (game->window->event.key.code == sfKeyQ ||
    game->window->event.key.code == sfKeyLeft)) {
        IMG[SELECT_ARROW].pos = (sfVector2f) {730, 300};
        sfSprite_setPosition(IMG[SELECT_ARROW].sprite, IMG[SELECT_ARROW].pos);
    }
    if (IMG[SELECT_ARROW].pos.x == 1530 && game->window->event.type ==
    sfEvtKeyPressed && (game->window->event.key.code == sfKeyQ ||
    game->window->event.key.code == sfKeyLeft)) {
        IMG[SELECT_ARROW].pos = (sfVector2f) {1130, 300};
        sfSprite_setPosition(IMG[SELECT_ARROW].sprite, IMG[SELECT_ARROW].pos);
    }
}

static void right_selection(game_t *game)
{
    if (IMG[SELECT_ARROW].pos.x == 1130 && game->window->event.type ==
    sfEvtKeyPressed && (game->window->event.key.code == sfKeyD ||
    game->window->event.key.code == sfKeyRight)) {
        IMG[SELECT_ARROW].pos = (sfVector2f) {1530, 300};
        sfSprite_setPosition(IMG[SELECT_ARROW].sprite, IMG[SELECT_ARROW].pos);
    }
    if (IMG[SELECT_ARROW].pos.x == 730 && game->window->event.type ==
    sfEvtKeyPressed && (game->window->event.key.code == sfKeyD ||
    game->window->event.key.code == sfKeyRight)) {
        IMG[SELECT_ARROW].pos = (sfVector2f) {1130, 300};
        sfSprite_setPosition(IMG[SELECT_ARROW].sprite, IMG[SELECT_ARROW].pos);
    }
    if (IMG[SELECT_ARROW].pos.x == 330 && game->window->event.type ==
    sfEvtKeyPressed && (game->window->event.key.code == sfKeyD ||
    game->window->event.key.code == sfKeyRight)) {
        IMG[SELECT_ARROW].pos = (sfVector2f) {730, 300};
        sfSprite_setPosition(IMG[SELECT_ARROW].sprite, IMG[SELECT_ARROW].pos);
    }
}

void left_or_right_selection(game_t *game)
{
    left_selection(game);
    right_selection(game);
}

static void choose_link(game_t *game)
{
    if (IMG[SELECT_ARROW].pos.x == 1130 && ((game->window->event.type ==
    sfEvtKeyPressed && game->window->event.key.code == sfKeyEnter) ||
    game->window->event.type == sfEvtMouseButtonPressed)) {
        game->skin = 1;
        loop_game(game);
    }
    if (IMG[SELECT_ARROW].pos.x == 1530 && ((game->window->event.type ==
    sfEvtKeyPressed && game->window->event.key.code == sfKeyEnter) ||
    game->window->event.type == sfEvtMouseButtonPressed)) {
        game->skin = 3;
        loop_game(game);
    }
}

void choose_link_with_enter(game_t *game)
{
    if (IMG[SELECT_ARROW].pos.x == 330 && ((game->window->event.type ==
    sfEvtKeyPressed && game->window->event.key.code == sfKeyEnter) ||
    game->window->event.type == sfEvtMouseButtonPressed)) {
        game->skin = 0;
        loop_game(game);
    }
    if (IMG[SELECT_ARROW].pos.x == 730 && ((game->window->event.type ==
    sfEvtKeyPressed && game->window->event.key.code == sfKeyEnter) ||
    game->window->event.type == sfEvtMouseButtonPressed)) {
        game->skin = 2;
        loop_game(game);
    }
    choose_link(game);
}
