/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** green_sbire_mouvement
*/

#include "main.h"

static void green_sbire_mouvement_down(game_t *game)
{
    sfVector2f pos = sfSprite_getPosition(IMG[GREEN_SBIRE].sprite);

    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (IMG[GREEN_SBIRE].clock)) > 100) {
        if (pos.y != 707) {
            sfSprite_move(IMG[GREEN_SBIRE].sprite, (sfVector2f) {0, 5});
            pos = sfSprite_getPosition(IMG[GREEN_SBIRE].sprite);
        }
        if (pos.y == 707) {
            IMG[GREEN_SBIRE].active = sfTrue;
            IMG[GREEN_SBIRE].rect_int.height = 36;
            IMG[GREEN_SBIRE].rect_int.left = 0;
            IMG[GREEN_SBIRE].rect_int.top = 80;
            IMG[GREEN_SBIRE].rect_int.width = 28;
            sfSprite_setTextureRect(IMG[GREEN_SBIRE].sprite,
            IMG[GREEN_SBIRE].rect_int);
        }
        sfClock_restart(IMG[GREEN_SBIRE].clock);
    }
}

static void green_sbire_mouvement_up(game_t *game)
{
    sfVector2f pos = sfSprite_getPosition(IMG[GREEN_SBIRE].sprite);

    if (sfTime_asMilliseconds(sfClock_getElapsedTime
    (IMG[GREEN_SBIRE].clock)) > 100) {
        if (pos.y != 372) {
            sfSprite_move(IMG[GREEN_SBIRE].sprite, (sfVector2f) {0, -5});
            pos = sfSprite_getPosition(IMG[GREEN_SBIRE].sprite);
        }
        if (pos.y <= 372) {
            IMG[GREEN_SBIRE].active = sfFalse;
            IMG[GREEN_SBIRE].rect_int.height = 36;
            IMG[GREEN_SBIRE].rect_int.left = 0;
            IMG[GREEN_SBIRE].rect_int.top = 0;
            IMG[GREEN_SBIRE].rect_int.width = 28;
            sfSprite_setTextureRect(IMG[GREEN_SBIRE].sprite,
            IMG[GREEN_SBIRE].rect_int);
        }
        sfClock_restart(IMG[GREEN_SBIRE].clock);
    }
}

void move_for_green_sbire(game_t *game)
{
    if (game->map[0].map_rect.left == 2570 &&
        game->map[0].map_rect.top == 2575) {
        if (IMG[GREEN_SBIRE].active == sfFalse) {
            green_sbire_mouvement_down(game);
        }
        if (IMG[GREEN_SBIRE].active == sfTrue) {
            green_sbire_mouvement_up(game);
        }
    }
}
