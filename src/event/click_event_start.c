/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** click_event_start.c
*/
#include "main.h"

void click_event_start(game_t *game)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        loop_game(game);
    }
}
