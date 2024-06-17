/*
** EPITECH PROJECT, 2024
** My_rpg
** File description:
** tuto
*/
#include "main.h"

static const char help[] =
"Hey Lonk ! Tu sembles un peu perdu, je vais te donner quelques conseils !\n"
"Pour selectionner ton personnage, choisi le avec la fleche puis \n"
"clique sur 'ENTRER'\n"
"Si tu veux te deplacer, utilise 'Z','Q','S','D' et utilise 'I' pour "
"l'inventaire\n"
"Si tu veux acceder au menu option depuis le jeu, appuis sur 'ECHAP'\n"
"Pour attaquer utilise ton 'CLIC GAUCHE'\n";

void navi_animation(sprite_t *sprite)
{
    sfIntRect rect;

    if (sfTime_asMilliseconds(sfClock_getElapsedTime(sprite->clock)) > 90) {
        rect = sfSprite_getTextureRect(sprite->sprite);
        rect.top += 17;
        if (rect.top >= 50)
            rect.top = 11;
        sfSprite_setTextureRect(sprite->sprite, rect);
        sfClock_restart(sprite->clock);
    }
}

void navi_text(game_t *game)
{
    game->text[0].font = sfFont_createFromFile("./text/ZeldaOracles.ttf");
    game->text[0].text = sfText_create();
    sfText_setString(game->text[0].text, help);
    sfText_setFont(game->text[0].text, game->text[0].font);
    sfText_setCharacterSize(game->text[0].text, 25);
    sfText_setPosition(game->text[0].text, (sfVector2f){515, 60});
    sfText_setFillColor(game->text[0].text, sfWhite);
}

void click_navi(game_t *game)
{
    sfFloatRect hitbox = sfSprite_getGlobalBounds(IMG[NAVI_SPRITE].sprite);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window->window);

    if (game->window->event.type == sfEvtMouseButtonPressed) {
        if (mouse.x >= (hitbox.left + 2) && mouse.x <= ((hitbox.left + 2) +
        hitbox.width) && mouse.y >= (hitbox.top + 35) && mouse.y <=
        ((hitbox.top + 35) + hitbox.height)) {
            IMG[NAVI_SPRITE].active = sfTrue;
        }
    }
}
