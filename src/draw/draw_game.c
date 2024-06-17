/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** draw_game
*/

#include "main.h"

static void pnj_position(game_t *game)
{
    if (game->map[0].map_rect.left == 2570 &&
        game->map[0].map_rect.top == 2575) {
        sfRenderWindow_drawSprite(game->window->window,
        IMG[ZELDO_PNJ].sprite, NULL);
        }
}

static void quest_pnj(game_t *game)
{
    if (game->map[0].map_rect.left == 2056 &&
        game->map[0].map_rect.top == 2575) {
        sfRenderWindow_drawSprite(game->window->window,
        IMG[QUEST_PNJ_1].sprite, NULL);
        IMG[QUEST_BOX].pos = (sfVector2f) {620, 540};
        sfSprite_setPosition(IMG[QUEST_BOX].sprite, IMG[QUEST_BOX].pos);
        if (PLAYER.pos.y >= 687 && IMG[QUEST_PNJ_2].active == sfFalse) {
            sfRenderWindow_drawSprite(game->window->window,
            IMG[QUEST_BOX].sprite, NULL);
            sfRenderWindow_drawText(game->window->window,
            game->text[1].text, NULL);
        }
        if (PLAYER.pos.y >= 687 && IMG[QUEST_PNJ_2].active == sfTrue) {
            IMG[PENDENTIF].active = sfFalse;
            sfRenderWindow_drawSprite(game->window->window,
            IMG[QUEST_BOX].sprite, NULL);
            sfRenderWindow_drawText(game->window->window,
            game->text[3].text, NULL);
        }
    }
}

static void quest_pnj_2(game_t *game)
{
    sfRenderWindow_drawSprite(game->window->window,
    game->map[4].tile, NULL);
    if (game->map[0].map_rect.left == 3084 &&
        game->map[0].map_rect.top == 2061) {
        if (PLAYER.pos.y <= 217) {
            IMG[QUEST_PNJ_2].active = sfTrue;
            IMG[PENDENTIF].active = sfTrue;
            init_new_pos_quest_box(game);
            sfRenderWindow_drawSprite(game->window->window,
            IMG[QUEST_BOX].sprite, NULL);
            sfRenderWindow_drawText(game->window->window,
            game->text[2].text, NULL);
        }
    }
}

static void draw_inventory(game_t *game)
{
    if (IMG[INV].active == sfTrue) {
        sfRenderWindow_drawSprite(game->window->window,
        IMG[INV].sprite, NULL);
        if (IMG[PENDENTIF].active == sfTrue) {
            sfRenderWindow_drawSprite(game->window->window,
            IMG[PENDENTIF].sprite, NULL);
        }
        sfRenderWindow_drawSprite(game->window->window,
        IMG[SWORD].sprite, NULL);
        sfRenderWindow_drawSprite(game->window->window,
        IMG[SHIELD].sprite, NULL);
        draw_text_in_inv(game);
    }
}

static void draw_map(game_t *game)
{
    sfRenderWindow_drawSprite(game->window->window,
    game->map[1].tile, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    game->map[2].tile, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    game->map[0].tile, NULL);
}

void draw_empty_heart(game_t *game)
{
    if (game->player->life <= 0) {
        sfSprite_setPosition(IMG[EMPTY_HEART].sprite, (sfVector2f) {50, 25});
        sfRenderWindow_drawSprite(game->window->window,
        IMG[EMPTY_HEART].sprite, NULL);
    }
    if (game->player->life <= 40) {
        sfSprite_setPosition(IMG[EMPTY_HEART].sprite, (sfVector2f) {105, 25});
        sfRenderWindow_drawSprite(game->window->window,
        IMG[EMPTY_HEART].sprite, NULL);
    }
    if (game->player->life <= 80) {
        sfSprite_setPosition(IMG[EMPTY_HEART].sprite, (sfVector2f) {160, 25});
        sfRenderWindow_drawSprite(game->window->window,
        IMG[EMPTY_HEART].sprite, NULL);
    }
    if (game->player->life < 160 && IMG[BASIC_HEART].active == sfFalse) {
        sfSprite_setPosition(IMG[EMPTY_HEART].sprite, (sfVector2f) {215, 25});
        sfRenderWindow_drawSprite(game->window->window,
        IMG[EMPTY_HEART].sprite, NULL);
    }
}

static void draw_hud(game_t *game)
{
    if (game->player->life > 0) {
        sfSprite_setPosition(IMG[BASIC_HEART].sprite, (sfVector2f) {50, 25});
        sfRenderWindow_drawSprite(game->window->window,
        IMG[BASIC_HEART].sprite, NULL);
    }
    if (game->player->life > 40) {
        sfSprite_setPosition(IMG[BASIC_HEART].sprite, (sfVector2f) {105, 25});
        sfRenderWindow_drawSprite(game->window->window,
        IMG[BASIC_HEART].sprite, NULL);
    }
    if (game->player->life > 80) {
        sfSprite_setPosition(IMG[BASIC_HEART].sprite, (sfVector2f) {160, 25});
        sfRenderWindow_drawSprite(game->window->window,
        IMG[BASIC_HEART].sprite, NULL);
    }
    if (IMG[BASIC_HEART].active == sfFalse) {
        sfSprite_setPosition(IMG[BASIC_HEART].sprite, (sfVector2f) {215, 25});
    sfRenderWindow_drawSprite(game->window->window,
    IMG[BASIC_HEART].sprite, NULL);
    }
}

static void draw_item_in_map(game_t *game)
{
    if (game->map[0].map_rect.left == 3084 &&
        game->map[0].map_rect.top == 2575) {
        if (IMG[BASIC_HEART].active == sfTrue) {
            sfSprite_setPosition(IMG[BASIC_HEART].sprite,
            (sfVector2f) {1257, 460});
            sfRenderWindow_drawSprite(game->window->window,
            IMG[BASIC_HEART].sprite, NULL);
        }
        take_heart(game);
    }
}

void draw_game(game_t *game)
{
    draw_map(game);
    pnj_position(game);
    if (game->map[0].map_rect.left == 2570 &&
        game->map[0].map_rect.top == 2575 &&
        IMG[BACK_START].active == sfFalse) {
        sfRenderWindow_drawSprite(game->window->window,
        game->sprite[GREEN_SBIRE].sprite, NULL);
    }
    draw_item_in_map(game);
    quest_pnj(game);
    if (game->map[0].map_rect.left == 3084 &&
        game->map[0].map_rect.top == 2061)
        sfRenderWindow_drawSprite(game->window->window,
        IMG[QUEST_PNJ_2].sprite, NULL);
    sfRenderWindow_drawSprite(game->window->window,
    PLAYER.player, NULL);
    draw_hud(game);
    draw_empty_heart(game);
    quest_pnj_2(game);
    draw_inventory(game);
}
