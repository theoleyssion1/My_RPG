/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** struct
*/

#ifndef STRUCT_H_
    #define STRUCT_H_
    #include "main.h"
    #include <SFML/Window.h>
    #include <SFML/Graphics.h>
    #include <SFML/System.h>
    #include <SFML/Audio.h>

typedef enum direction_s {
    RIGHT,
    LEFT,
    UP,
    DOWN
} direction_t;

typedef struct window_s {
    sfVideoMode videomode;
    sfRenderWindow *window;
    sfEvent event;
} window_t;

typedef struct map_s {
    sfSprite *tile;
    sfTexture *tile_text;
    sfVector2f scale;
    sfVector2f pos;
    sfIntRect map_rect;
    sfImage *image;
} map_t;

typedef struct fight_s {
    sfBool click;
    sfIntRect rec_fight;
    int check;
} fight_t;


typedef struct player_s {
    int life;
    int dmg;
    sfSprite *player;
    sfTexture *player_text;
    sfVector2f scale;
    sfVector2f pos;
    sfIntRect player_rect;
    direction_t facing;
    sfBool is_moving;
    sfClock *animation_clock;
    float pos_player_map_x;
    float pos_player_map_y;
} player_t;

typedef struct sprite_s {
    sfTexture *texture;
    sfSprite *sprite;
    sfVector2f scale;
    sfVector2f pos;
    sfClock *clock;
    sfBool active;
    sfIntRect rect_int;
    sfFloatRect rect_float;
} sprite_t;

typedef struct sbire_s {
    int life;
    int dmg;
} sbire_t;

typedef struct music_s {
    sfMusic *song;
    float volume;
} music_t;

typedef struct text_s {
    sfText *text;
    sfFont *font;
} text_t;

typedef struct game_s {
    window_t *window;
    sprite_t *sprite;
    music_t music;
    map_t *map;
    sfVector2i mouse;
    player_t *player;
    sbire_t *sbire;
    fight_t fight;
    text_t *text;
    int skin;
} game_t;

typedef struct save_s {
    int skin_color;
    sfVector2f pos_player;
    sfIntRect map_rect;
} save_t;


#endif
