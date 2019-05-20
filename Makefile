NAME = libftprintf.a

SRC = src/ft_atoi.c src/ft_itoa_base.c src/ft_itoa.c src/ft_num_dig.c \
src/ft_percent.c src/ft_printf.c src/ft_param/ft_param_add.c \
src/ft_param/ft_param_nul.c src/ft_str/ft_putchar.c src/ft_str/ft_strchr.c src/ft_str/ft_strlen.c \
src/ft_type/ft_c.c src/ft_type/ft_o.c src/ft_type/ft_p.c src/ft_buf/ft_buf_add.c src/ft_buf/ft_buf_new.c \
src/ft_type/ft_s.c src/ft_type/ft_u.c src/ft_type/ft_prcnt.c src/ft_itoa_base_ll.c \
src/ft_type/ft_d.c src/ft_str/ft_strnew.c src/ft_type/ft_x.c src/ft_type/ft_x_up.c src/ft_buf/ft_do_buf_empty.c \
src/ft_str/ft_memnew.c src/ft_str/ft_memset.c src/ft_type/ft_c_up.c src/ft_type/ft_f.c src/ft_dota.c \
src/ft_str/ft_pow.c src/ft_str/ft_strjoin.c src/ft_str/ft_memnew.c src/ft_type/ft_o_up.c src/ft_type/ft_s_up.c \
src/ft_type/ft_u_up.c src/ft_type/ft_d_up.c src/ft_type/ft_o_null.c src/ft_type/ft_x_null.c src/ft_lnum/ft_lnum.c src/ft_str/ft_strndup.c \
src/ft_help_dota.c src/ft_type/ft_f_up.c src/ft_type/ft_color.c

OBJ = $(SRC:.c=.o)

INC = ./inc

CC = gcc
FLAGS = -Wall -Wextra -Werror

$(NAME) : $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

%.o: src/%.c
	@$(CC) $(FLAGS) -I $(INC) -o $@ -c $<

all : $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean all
