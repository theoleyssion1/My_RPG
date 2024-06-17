/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** init_life.c
*/

#include "main.h"
#include <stdlib.h>

static void lonk_life(game_t *game)
{
    game->player->life = 120;
    game->player->dmg = 2;
}

static void sbire_life(game_t *game)
{
    game->sbire->life = 2;
}

void init_life(game_t *game)
{
    sbire_life(game);
    lonk_life(game);
}
