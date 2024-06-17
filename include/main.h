/*
** EPITECH PROJECT, 2024
** include
** File description:
** for include function
*/

#ifndef STUMPER_H
    #define STUMPER_H
    #include "struct.h"
    #include "define.h"
    #include <SFML/Window/Event.h>

int my_rpg(void);

////////////  TESTING FUNCTION  /////////////////

void show_hitbox(game_t *game, int p);

///////////////////////////////////////////////////

///////////////  INIT FUNCTION  ///////////////////

void create_win(game_t *game);
void all_setup(game_t *game);
void song_setup(game_t *game);
void init_main_sprite(game_t *game);
void init_all_sprite(game_t *game);
void init_menu_sprite(game_t *game);
void init_start_sprite(game_t *game);
void init_map(game_t *game);
void init_map_background_left(game_t *game);
void init_map_background_right(game_t *game);
void init_colision(game_t *game);
void init_arches(game_t *game);
void init_player_skin(game_t *game);
void init_sprite_in_pause(game_t *game);
void destroy(game_t *game);
void init_quest_pnj_1(sprite_t *sprite);
void init_quest_pnj_2(sprite_t *sprite);
void init_zeldo_pnj(sprite_t *sprite);
void init_dialogue_box_for_quest(sprite_t *sprite);
void navi_text(game_t *game);
void init_text(game_t *game);
void init_navi_sprite(sprite_t *sprite);
void init_help_bubble(sprite_t *sprite);
void init_dialogue_box(sprite_t *sprite);
void init_new_pos_quest_box(game_t *game);
void first_pnj_finish(game_t *game);
void init_all_inventory(game_t *game);
void init_life(game_t *game);
void init_all_hud(game_t *game);
void init_game_over_sprite(game_t *game);

///////////////////////////////////////////////////


///////////////  LOOP AND EVENT  ///////////////////

void loop_start(game_t *game);
void loop_menu(game_t *game);
void loop_select(game_t *game);
void loop_game(game_t *game);
void loop_pause(game_t *game);
void loop_new_game(game_t *game);
void loop_game_over(game_t *game);
void event_manager(game_t *game);
void event_game_over(game_t *game);
void event_manager_pause(game_t *game);
void event_manager_menu(game_t *game);
void event_manager_start(game_t *game);
void event_manager_player(game_t *game);
void event_manager_new_game(game_t *game);
void click_for_return(window_t *win, sprite_t *sprite, game_t *game);
void click_for_return_in_pause(window_t *win, sprite_t *sprite, game_t *game);
void click_for_quit(window_t *win, sprite_t *sprite);
void animation_button(game_t *game);
void choose_link_with_enter(game_t *game);
void save_info(game_t *game);
void load_file(game_t *game);
void click_event_start(game_t *game);
void fight_click_condition(game_t *game);
void player_fight_manager(game_t *game);
void verif_click_event(game_t *game);
void move_for_green_sbire(game_t *game);
void init_all_at_zero(game_t *game);
void open_inventory(game_t *game);
void take_heart(game_t *game);
void sbire_hit(game_t *game);
void draw_text_in_inv(game_t *game);

///////////////////////////////////////////////////


////////////  DRAW SPRITE FUNCTION  ///////////////

void draw_start_game(game_t *game);
void draw_menu_button(game_t *game);
void draw_select_skin(game_t *game);
void draw_menu_pause(game_t *game);
void draw_new_game(game_t *game);
void draw_game(game_t *game);
void draw_game_over(game_t *game);

///////////////////////////////////////////////////


///////////////  MENU IN LOBBY  ///////////////////

void click_mute(game_t *game);
void click_max(game_t *game);
void click_min(game_t *game);
void navi_animation(sprite_t *sprite);
void click_navi(game_t *game);
void change_window_mode(game_t *game);
sfBool switch_in_menu(game_t *game, sfBool music);
sfVector2f resize_low_window(sprite_t *sprite);
sfVector2f resize_high_window(sprite_t *sprite);

///////////////////////////////////////////////////


/////////////  MENU IN GAME  //////////////////////

void draw_menu_in_game(game_t *game);
void loop_menu_in_game(game_t *game);
void press_escape_in_game(game_t *game);
void event_manager_menu_in_game(game_t *game);
void click_for_return_in_game(window_t *win, sprite_t *sprite, game_t *game);

///////////////////////////////////////////////////


////////////  SELECTION FUNCTION  /////////////////

void select_skin(game_t *game);
void left_or_right_selection(game_t *game);

///////////////////////////////////////////////////


/////////////////////  GAME  //////////////////////

void player_manager(game_t *game);
void map_movement_axis_y(game_t *game);
int map_colision_x(game_t *game);
int map_colision_y(game_t *game);
void map_update(game_t *game);
void player_fight_animation(game_t *game);

///////////////////////////////////////////////////

#endif
