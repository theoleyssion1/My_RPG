/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** save
*/
#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>


void save_info(game_t *game)
{
    FILE *file = fopen("./save.txt", "w");

    if (file == NULL) {
        printf("Failed to open file.\n");
        return;
    }
    fprintf(file, "%i\n", game->skin);
    fprintf(file, "%f\n", PLAYER.pos.x);
    fprintf(file, "%f\n", PLAYER.pos.y);
    fprintf(file, "%d\n", game->map->map_rect.left);
    fprintf(file, "%d\n", game->map->map_rect.top);
    fprintf(file, "%d\n", IMG[QUEST_PNJ_2].active);
    fprintf(file, "%f\n", PLAYER.pos_player_map_x);
    fprintf(file, "%f\n", PLAYER.pos_player_map_y);
    fprintf(file, "%d\n", IMG[BASIC_HEART].active);
    fprintf(file, "%d\n", game->player->life);
    fprintf(file, "%d\n", IMG[PENDENTIF].active);
    fclose(file);
    printf("information saved successfully in the file: %s.\n", "save.txt");
}
