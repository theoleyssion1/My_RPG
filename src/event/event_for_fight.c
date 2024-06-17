/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** event_for_fight.c
*/
#include "main.h"

static void check_hitbox(game_t *game)
{
    sfVector2f hitbox_sbire = sfSprite_getPosition(IMG[GREEN_SBIRE].sprite);
    sfVector2f hitbox_player = sfSprite_getPosition(PLAYER.player);

    hitbox_sbire.x -= 70;
    hitbox_sbire.y -= 70;
    if (hitbox_player.x >= hitbox_sbire.x && (hitbox_player.x + (24 * 2.5)) <=
    (hitbox_sbire.x + (28 * 2.5) + 70) && hitbox_player.y >=
    hitbox_sbire.y && (hitbox_player.y + 32) <=
    (hitbox_sbire.y + (36 * 2.5) + 70)) {
        IMG[BACK_START].active = sfTrue;
    }
}

void verif_click_event(game_t *game)
{
    if (game->fight.click == sfTrue) {
        player_fight_manager(game);
        check_hitbox(game);
    }
}

static void fight_click_condition_x(game_t *game)
{
    if (PLAYER.facing == RIGHT) {
        game->fight.rec_fight.height = 34;
        game->fight.rec_fight.top = 88;
        PLAYER.pos.y -= 3 * 2.5;
    } else if (PLAYER.facing == LEFT) {
        game->fight.rec_fight.height = 35;
        game->fight.rec_fight.top = 52;
        PLAYER.pos.x -= 15 * 2.5;
        PLAYER.pos.y -= 3 * 2.5;
    }
}

void fight_click_condition(game_t *game)
{
    fight_click_condition_x(game);
    if (PLAYER.facing == UP) {
        game->fight.rec_fight.height = 42;
        game->fight.rec_fight.top = 10;
        PLAYER.pos.x -= 15 * 2.5;
        PLAYER.pos.y -= 10 * 2.5;
    } else if (PLAYER.facing == DOWN) {
        game->fight.rec_fight.top = 122;
        game->fight.rec_fight.height = 42;
        PLAYER.pos.x -= 6 * 2.5;
        PLAYER.pos.y -= 1 * 2.5;
    }
    if (game->window->event.type == sfEvtMouseButtonPressed) {
        sfSprite_setPosition(PLAYER.player, PLAYER.pos);
        game->fight.click = sfTrue;
    }
}
