/*
** EPITECH PROJECT, 2024
** My_RPG
** File description:
** quest
*/
#include "main.h"

static const char quest_text[] =
"Hey jeune aventurier, pourrais-tu aider un vieil homme comme moi ?\n"
"Mon frere est parti en courant vers l'EST et je l'ai entendu\n"
"crier 'a l'aide'. J'ai aussi entendu dire qu'il y avait des\n"
"monstres vers l'EST. Pourrais-tu y aller pour moi ?\n";

static const char quest_text2[] =
"Bonjour, jeune homme... Quoi ? C'est mon frere qui t'envoie ! Il devait\n"
"etre inquiet, mais je vais bien. Je me baladais dans ces ruines et j'ai \n"
"apercu ce pendentif. Pourrais-tu le remettre a  mon frere pour lui dire \n"
"que tout va bien ?\n";

static const char quest_text3[] =
"Oh, jeune aventurier, c'est vous ! Oh, vous avez retrouve mon frere\n"
"et il vous a laisse un pendentif pour moi ? Maintenant que je sais\n"
"que mon frere est sain et sauf, je vais pouvoir retourner au village\n"
"Cocorico et vivre ma petite vie de vieil homme.\n";

void start_quest(game_t *game)
{
    game->text[1].font = sfFont_createFromFile("./text/ZeldaOracles.ttf");
    game->text[1].text = sfText_create();
    sfText_setString(game->text[1].text, quest_text);
    sfText_setFont(game->text[1].text, game->text[1].font);
    sfText_setCharacterSize(game->text[1].text, 20);
    sfText_setPosition(game->text[1].text, (sfVector2f){650, 560});
    sfText_setFillColor(game->text[1].text, sfWhite);
}

void second_pnj_quest(game_t *game)
{
    game->text[2].font = sfFont_createFromFile("./text/ZeldaOracles.ttf");
    game->text[2].text = sfText_create();
    sfText_setString(game->text[2].text, quest_text2);
    sfText_setFont(game->text[2].text, game->text[2].font);
    sfText_setCharacterSize(game->text[2].text, 20);
    sfText_setPosition(game->text[2].text, (sfVector2f){470, 20});
    sfText_setFillColor(game->text[2].text, sfWhite);
}

void first_pnj_finish(game_t *game)
{
    game->text[3].font = sfFont_createFromFile("./text/ZeldaOracles.ttf");
    game->text[3].text = sfText_create();
    sfText_setString(game->text[3].text, quest_text3);
    sfText_setFont(game->text[3].text, game->text[3].font);
    sfText_setCharacterSize(game->text[3].text, 20);
    sfText_setPosition(game->text[3].text, (sfVector2f){650, 560});
    sfText_setFillColor(game->text[3].text, sfWhite);
}

void init_text(game_t *game)
{
    navi_text(game);
    start_quest(game);
    second_pnj_quest(game);
    first_pnj_finish(game);
}

void init_new_pos_quest_box(game_t *game)
{
    IMG[QUEST_BOX].pos = (sfVector2f) {450, 0};
    sfSprite_setPosition(IMG[QUEST_BOX].sprite, IMG[QUEST_BOX].pos);
}
