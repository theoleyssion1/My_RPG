/*
** EPITECH PROJECT, 2024
** fight animation
** File description:
** fight animation
*/

#include "main.h"

void player_fight_manager(game_t *game)
{
    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (PLAYER.animation_clock)) > 50) {
        game->fight.rec_fight.left += 40;
        if (game->fight.rec_fight.left >= 418) {
            game->fight.rec_fight.left = 140;
            player_fight_animation(game);
            game->fight.click = sfFalse;
            player_manager(game);
            return;
        }
        sfSprite_setTextureRect(PLAYER.player, game->fight.rec_fight);
        sfClock_restart(PLAYER.animation_clock);
    }
}

void player_fight_animation(game_t *game)
{
    if (PLAYER.facing == RIGHT) {
        PLAYER.pos.y += 3 * 2.5;
    } else if (PLAYER.facing == LEFT) {
        PLAYER.pos.x += 15 * 2.5;
        PLAYER.pos.y += 3 * 2.5;
    }
    if (PLAYER.facing == UP) {
        PLAYER.pos.x += 15 * 2.5;
        PLAYER.pos.y += 10 * 2.5;
    } else if (PLAYER.facing == DOWN) {
        PLAYER.pos.x += 6 * 2.5;
        PLAYER.pos.y += 1 * 2.5;
    }
    sfSprite_setPosition(PLAYER.player, PLAYER.pos);
}
