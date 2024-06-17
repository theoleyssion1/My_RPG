/*
** EPITECH PROJECT, 2024
** stumper
** File description:
** stumper
*/

#include "main.h"
#include <stdlib.h>

int my_rpg(void)
{
    game_t game;

    create_win(&game);
    all_setup(&game);
    sfMusic_play(game.music.song);
    sfMusic_setLoop(game.music.song, sfTrue);
    loop_start(&game);
    destroy(&game);
    return OK;
}
