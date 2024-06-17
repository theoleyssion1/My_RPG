/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** lonk_stat.c
*/

#include "main.h"
#include <stdio.h>

void sbire_hitbox(game_t *game)
{
    sfFloatRect sbire = sfSprite_getGlobalBounds(IMG[GREEN_SBIRE].sprite);
    sfFloatRect player = sfSprite_getGlobalBounds(PLAYER.player);

    if (sfFloatRect_intersects(&sbire, &player, NULL) == sfTrue &&
        game->map[0].map_rect.left == 2570 &&
        game->map[0].map_rect.top == 2575) {
        game->player->life -= 1;
        if (game->player->life <= 0) {
            loop_game_over(game);
        }
    }
}

void sbire_hit(game_t *game)
{
    if (IMG[BACK_START].active == sfFalse)
        sbire_hitbox(game);
}
