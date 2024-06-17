/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** load
*/
#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

static char **str_to_word_array(char *str, const char *delimiters)
{
    char **array = NULL;
    char *token;
    int count = 0;

    array = (char **)malloc(sizeof(char *));
    token = strtok(str, delimiters);
    while (token != NULL) {
        array[count] = strdup(token);
        count++;
        array = (char **)realloc(array, (count + 1) * sizeof(char *));
        token = strtok(NULL, delimiters);
    }
    return array;
}

static void transfert_data_in_game(game_t *game, char **array)
{
    game->skin = atoi(array[0]);
    game->player->pos.x = atof(array[1]);
    game->player->pos.y = atof(array[2]);
    game->map[0].map_rect.left = atoi(array[3]);
    game->map[0].map_rect.top = atoi(array[4]);
    game->map[1].map_rect.left = atoi(array[3]);
    game->map[1].map_rect.top = atoi(array[4]);
    game->map[2].map_rect.left = atoi(array[3]) + 256;
    game->map[2].map_rect.top = atoi(array[4]);
    game->map[4].map_rect.left = atoi(array[3]);
    game->map[4].map_rect.top = atoi(array[4]);
    IMG[QUEST_PNJ_2].active = atoi(array[5]);
    PLAYER.pos_player_map_x = atof(array[6]);
    PLAYER.pos_player_map_y = atof(array[7]);
    IMG[BASIC_HEART].active = atoi(array[8]);
    game->player->life = atoi(array[9]);
    IMG[PENDENTIF].active = atoi(array[10]);
}

static void str_in_array(game_t *game, char *str)
{
    char **array = str_to_word_array(str, "\n");

    transfert_data_in_game(game, array);
    sfSprite_setPosition(game->player[game->skin].player, game->player->pos);
    sfSprite_setTextureRect(game->map[0].tile, game->map[0].map_rect);
    for (int i = 10; i >= 0; i -= 1) {
        free(array[i]);
    }
    free(array);
}

static void load_error(game_t *game)
{
    printf("Failed to open file.\n");
    loop_new_game(game);
    return;
}

static void load_condition(game_t *game, int count, char *str)
{
    if (count != 11) {
        load_error(game);
        return;
    } else {
        str_in_array(game, str);
    }
}

void load_file(game_t *game)
{
    FILE *file = fopen("./save.txt", "r");
    int i = 0;
    int count = 0;
    char *str = malloc(sizeof(char) * 70);

    if (file == NULL) {
        printf("Failed to open file.\n");
        return loop_new_game(game);
    }
    for (char c; (c = getc(file)) != EOF; i++) {
        if (c == '\n')
            count += 1;
        str[i] = c;
    }
    str[i] = '\0';
    load_condition(game, count, str);
    free(str);
    fclose(file);
}
