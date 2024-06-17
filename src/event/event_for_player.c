/*
** EPITECH PROJECT, 2024
** event_for_player
** File description:
** event_for_player
*/

#include "main.h"

static void spawn_sbire(game_t *game)
{
    if (game->map[0].map_rect.left != 2570 ||
        game->map[0].map_rect.top != 2575) {
        IMG[BACK_START].active = sfFalse;
        return;
    }
}

void event_manager_player(game_t *game)
{
    while (sfRenderWindow_pollEvent(game->window->window,
    &game->window->event)) {
        if (game->window->event.type == sfEvtClosed)
            sfRenderWindow_close(game->window->window);
        player_manager(game);
        open_inventory(game);
        press_escape_in_game(game);
        sbire_hit(game);
        if (game->fight.click == sfFalse)
            fight_click_condition(game);
        spawn_sbire(game);
    }
    move_for_green_sbire(game);
}

void take_heart(game_t *game)
{
    if ((PLAYER.pos.x >= 1200 && PLAYER.pos.x <= 1260)
    && (PLAYER.pos.y >= 405 && IMG[BASIC_HEART].active == sfTrue)) {
        IMG[BASIC_HEART].active = sfFalse;
        game->player->life = 160;
    }
}
