##
## EPITECH PROJECT, 2019
## MUL_my_defender_2019
## File description:
## Makefile
##

SRC =	./src/main.c \
		./src/create_window.c \
		./src/create_game.c \
		./src/create_menu.c \
		./src/init_menu.c \
		./src/init_enemy.c \
		./src/init_bullets.c \
		./src/start_game.c \
		./src/start_menu.c \
		./src/init_plants.c \
		./src/switch_scene.c \
		./src/is_mouse.c \
		./src/random_numbers.c \
		./src/event_close.c \
		./src/destroy.c \
		./src/manage_events.c \
		./src/music.c \
		./src/display.c \
		./src/contour.c \
		./src/animate_enemy.c \
		./src/drop_plants.c \
		./src/draw_pause.c \
		./src/is_pause_menu.c \
		./src/create_bullets_of_plants.c \
		./src/shoot_enemy.c \

OBJ = $(SRC:.c=.o)

NAME =	my_defender

CFLAGS = -W -Wall -Wextra -I./include

LDFLAGS =  -lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio

all: $(NAME)

$(NAME):	$(OBJ)
		gcc $(CFLAGS) $(OBJ) -o $(NAME) $(LDFLAGS)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re: fclean all
