##
## EPITECH PROJECT, 2024
## makefile
## File description:
## makefile
##

SRC		=	my_rpg.c\
			loop.c\
			loop2.c\

SRC +=		game/quest.c\
			game/map_movement.c\
			game/map_colision.c\
			game/player_movement.c\
            game/fight_animation.c\
			game/green_sbire_mouvement.c\

SRC +=		settings/stat.c\
			settings/save.c\
			settings/load.c\
			settings/menu.c\
			settings/tuto.c\
			settings/resize.c\
			settings/new_game.c\
			settings/quit_button.c\
			settings/menu_in_game.c\
			settings/volume_manager.c\
			settings/animation_select.c\
			settings/button_mute_menu.c\

SRC +=		draw/draw_game.c\
			draw/draw_pause.c\
			draw/draw_new_game.c\
			draw/draw_game_over.c\
    		draw/draw_start_game.c\
			draw/draw_menu_button.c\
			draw/draw_select_skin.c\
			draw/draw_menu_in_game.c\

SRC +=		event/event.c\
			event/event_for_menu.c\
			event/event_game_over.c\
			event/event_for_pause.c\
			event/event_for_fight.c\
			event/event_for_select.c\
			event/event_for_player.c\
            event/click_event_start.c\
			event/event_for_new_game.c\
			event/event_open_inventory.c\
			event/event_for_menu_in_game.c\

SRC +=		init/destroy.c\
			init/init_life.c\
			init/map_setup.c\
			init/all_setup.c\
			init/song_setup.c\
			init/window_setup.c\
			init/init_all_sprite.c\
			init/init_hud_in_game.c\
			init/init_tuto_sprite.c\
			init/init_start_sprite.c\
			init/sprite_setup_menu.c\
			init/sprite_setup_main.c\
			init/init_quest_sprites.c\
			init/init_sprite_in_game.c\
			init/main_character_setup.c\
			init/init_sprite_game_over.c\
			init/init_sprite_inventory.c

DIR_SRC        =    $(addprefix src/, $(SRC))

MAIN_SRC    =    src/main.c                        \

TEST        =    unit_test.c\

DIR_TESTS    =    $(addprefix tests/, $(TEST))

OBJ_DIR_SRC    =    $(DIR_SRC:.c=.o)

OBJ_MAIN    =    $(MAIN_SRC:.c=.o)

OBJ            =    $(OBJ_DIR_SRC) $(OBJ_MAIN)

CPPFLAGS    =    -I include/                        \

CFLAGS        =    -Wall -Wextra -ggdb3

GRAPHICS	= -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window

NAME        =    my_rpg

$(NAME):    $(OBJ)
		gcc -o $(NAME) -g $(CFLAGS) $(OBJ) $(GRAPHICS)

all: $(NAME)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -rf unit_tests
		rm -rf *.gcov
		rm -f $(NAME)

re:        fclean all

unit_tests:    re
		mkdir unit_tests
		gcc -o unit_tests/unit_tests $(DIR_SRC) $(DIR_TESTS)\
		$(CPPFLAGS) $(LDLIBS) --coverage -lcriterion

tests_run:    unit_tests
		./unit_tests/unit_tests

.PHONY: all clean fclean re tests_run
