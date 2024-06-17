/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** init_all_sprite
*/

#include "main.h"
#include <stdlib.h>

void init_all_sprite(game_t *game)
{
    game->sprite = malloc(sizeof(sprite_t) * TOTAL_SPRITE);
    game->player = malloc(sizeof(player_t) * 4);
    game->text = malloc(sizeof(text_t) * TOTAL_TEXT);
    game->sbire = malloc(sizeof(sbire_t));
    game->fight.check = 0;
    game->fight.click = sfFalse;
    init_main_sprite(game);
    init_menu_sprite(game);
    init_start_sprite(game);
    init_player_skin(game);
    init_all_inventory(game);
    init_sprite_in_pause(game);
    init_all_hud(game);
    init_game_over_sprite(game);
}
