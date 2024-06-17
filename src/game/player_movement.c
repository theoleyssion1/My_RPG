/*
** EPITECH PROJECT, 2024
** player movement
** File description:
** player movement
*/

#include "main.h"

static void player_movement_down(game_t *game)
{
    if (game->window->event.type == sfEvtKeyPressed
    && (game->window->event.key.code == sfKeyS)) {
        PLAYER.is_moving = sfTrue;
        PLAYER.facing = DOWN;
        if (PLAYER.pos.y <= 950 && game->map[0].map_rect.top < 4116
        && map_colision_y(game) == 2) {
            sfSprite_move(PLAYER.player, (sfVector2f){0, 5});
            PLAYER.pos_player_map_y += 2.52;
        }
        return;
    }
    PLAYER.is_moving = sfFalse;
}

static void player_movement_up(game_t *game)
{
    if (game->window->event.type == sfEvtKeyPressed
    && (game->window->event.key.code == sfKeyZ)) {
        PLAYER.is_moving = sfTrue;
        PLAYER.facing = UP;
        if (PLAYER.pos.y >= 0 && game->map[0].map_rect.top > 0
        && map_colision_y(game) == 1) {
            sfSprite_move(PLAYER.player, (sfVector2f){0, -5});
            PLAYER.pos_player_map_y -= 2.52;
        }
        return;
    }
    player_movement_down(game);
}

static void player_movement_left(game_t *game)
{
    if (game->window->event.type == sfEvtKeyPressed
    && (game->window->event.key.code == sfKeyQ)) {
        PLAYER.is_moving = sfTrue;
        PLAYER.facing = LEFT;
        if (PLAYER.pos.x >= 450 && game->map[0].map_rect.left > -1
        && map_colision_x(game) == 3) {
            sfSprite_move(PLAYER.player, (sfVector2f){-5, 0});
            PLAYER.pos_player_map_x -= 2.52;
        }
        return;
    }
    player_movement_up(game);
}

static void player_movement_right(game_t *game)
{
    if (game->window->event.type == sfEvtKeyPressed
    && (game->window->event.key.code == sfKeyD)) {
        PLAYER.is_moving = sfTrue;
        PLAYER.facing = RIGHT;
        if (PLAYER.pos.x <= 1450 && game->map[0].map_rect.left < 4110
        && map_colision_x(game) == 4) {
            sfSprite_move(PLAYER.player, (sfVector2f){5, 0});
            PLAYER.pos_player_map_x += 2.52;
        }
        return;
    }
    player_movement_left(game);
}

static void player_clock(game_t *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (PLAYER.animation_clock)) > 130) {
        PLAYER.player_rect = sfSprite_getTextureRect
        (PLAYER.player);
        PLAYER.player_rect.left += 24;
        if (PLAYER.player_rect.left >= 144)
            PLAYER.player_rect.left = 7;
        sfSprite_setTextureRect(PLAYER.player,
        PLAYER.player_rect);
        sfClock_restart(PLAYER.animation_clock);
    }
}

static void player_animation(game_t *game)
{
    if (PLAYER.facing == RIGHT) {
        PLAYER.player_rect.top = 276;
        PLAYER.player_rect.height = 23;
    } else if (PLAYER.facing == LEFT) {
        PLAYER.player_rect.top = 216;
        PLAYER.player_rect.height = 23;
    }
    if (PLAYER.facing == UP) {
        PLAYER.player_rect.top = 184;
        PLAYER.player_rect.height = 30;
    } else if (PLAYER.facing == DOWN) {
        PLAYER.player_rect.top = 243;
        PLAYER.player_rect.height = 32;
    }
    if (PLAYER.is_moving == sfFalse) {
        sfSprite_setTextureRect(PLAYER.player,
        PLAYER.player_rect);
        return;
    }
    player_clock(game);
}

void player_manager(game_t *game)
{
    player_animation(game);
    player_movement_right(game);
}
