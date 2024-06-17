/*
** EPITECH PROJECT, 2024
** event
** File description:
** event
*/
#include "main.h"
#include "stdlib.h"


void change_window(game_t *game, int i)
{
    if (i == 2 && game->window->event.type == sfEvtMouseButtonPressed) {
            IMG[BACK_MENU].rect_int.left = 0;
            loop_menu(game);
        }
        if (i == 1 && game->window->event.type ==
        sfEvtMouseButtonPressed)
            loop_select(game);
        if (i == RESUME_BUTTON && game->window->event.type ==
        sfEvtMouseButtonPressed) {
            save_info(game);
            loop_start(game);
        }
}

void animation_button(game_t *game)
{
    game->mouse = sfMouse_getPositionRenderWindow(game->window->window);
    IMG[BACK_MENU].rect_float =
    sfSprite_getGlobalBounds(IMG[BACK_MENU].sprite);
    if (sfFloatRect_contains(&IMG[BACK_MENU].rect_float, game->mouse.x,
    game->mouse.y) == sfTrue) {
        IMG[BACK_MENU].rect_int.left = 301;
        sfSprite_setTextureRect(IMG[BACK_MENU].sprite,
        IMG[BACK_MENU].rect_int);
        change_window(game, BACK_MENU);
    } else {
        IMG[BACK_MENU].rect_int.left = 171;
        sfSprite_setTextureRect(IMG[BACK_MENU].sprite,
        IMG[BACK_MENU].rect_int);
    }
}

static void button_action(game_t *game, int i)
{
    if (i == 2 && game->window->event.type == sfEvtMouseButtonPressed) {
            IMG[2].rect_int.left = 0;
            loop_menu(game);
    } else if (i == 1 && game->window->event.type ==
        sfEvtMouseButtonPressed) {
        loop_new_game(game);
    }
}

static void animation_for_button(game_t *game, int i)
{
    game->mouse = sfMouse_getPositionRenderWindow(game->window->window);
    IMG[i].rect_float = sfSprite_getGlobalBounds(IMG[i].sprite);
    if (sfFloatRect_contains(&IMG[i].rect_float, game->mouse.x,
    game->mouse.y) == sfTrue) {
        IMG[i].rect_int.left = 128;
        sfSprite_setTextureRect(IMG[i].sprite, IMG[i].rect_int);
        button_action(game, i);
    } else {
        IMG[i].rect_int.left = 0;
        sfSprite_setTextureRect(IMG[i].sprite, IMG[i].rect_int);
    }
}

void event_manager_start(game_t *game)
{
    while (sfRenderWindow_pollEvent(game->window->window,
    &game->window->event)) {
        if (game->window->event.type == sfEvtClosed)
            sfRenderWindow_close(game->window->window);
        animation_for_button(game, 1);
        animation_for_button(game, 2);
        click_navi(game);
        click_for_quit(game->window, &IMG[QUIT_BUTTON]);
    }
    navi_animation(&IMG[NAVI_SPRITE]);
}
