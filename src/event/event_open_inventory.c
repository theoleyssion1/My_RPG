/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** event_open_inventory.c
*/

#include "main.h"
#include <stdio.h>

static void draw_text_shield(game_t *game)
{
    if ((game->mouse.x <= (IMG[SHIELD].pos.x + 40) && game->mouse.x >=
    (IMG[SHIELD].pos.x - 10)) && (game->mouse.y <= (IMG[SHIELD].pos.y + 40)
    && game->mouse.y >= (IMG[SHIELD].pos.y - 10)))
        sfRenderWindow_drawText(game->window->window,
        game->text[5].text, NULL);
    if ((game->mouse.x <= (IMG[PENDENTIF].pos.x + 40) && game->mouse.x >=
    (IMG[PENDENTIF].pos.x - 10)) && (game->mouse.y <= (IMG[PENDENTIF].pos.y +
    40) && game->mouse.y >= (IMG[PENDENTIF].pos.y - 10)) &&
    IMG[PENDENTIF].active == sfTrue)
        sfRenderWindow_drawText(game->window->window,
        game->text[6].text, NULL);
}

void draw_text_in_inv(game_t *game)
{
    game->mouse = sfMouse_getPositionRenderWindow(game->window->window);
    if ((game->mouse.x <= (IMG[SWORD].pos.x + 40) && game->mouse.x >=
    (IMG[SWORD].pos.x - 10)) && (game->mouse.y <= (IMG[SWORD].pos.y + 40)
    && game->mouse.y >= (IMG[SWORD].pos.y - 10)))
        sfRenderWindow_drawText(game->window->window,
        game->text[4].text, NULL);
    draw_text_shield(game);
}

void open_inventory(game_t *game)
{
    if (game->window->event.key.code == sfKeyI &&
    game->window->event.type == sfEvtKeyPressed &&
    IMG[INV].active == sfFalse) {
        IMG[INV].active = sfTrue;
        return;
    }
    if (game->window->event.key.code == sfKeyI &&
    game->window->event.type == sfEvtKeyPressed &&
    IMG[INV].active == sfTrue) {
        IMG[INV].active = sfFalse;
        return;
    }
}
