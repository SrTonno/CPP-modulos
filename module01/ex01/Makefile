include colors.mk
###############################################################################
#                                              FILES                          #
###############################################################################
SRCSDIR = ./
SRCSCFILES = main.cpp Zombie.cpp  zombieHorde.cpp

#UTILDIR = ${addprefix ${SRCSDIR}, utils/}
#UTILFILES = ft_atoi.c utils.c ft_isdigit.c


SRCS =	${addprefix ${SRCSDIR}, ${SRCSCFILES}} \
		#${addprefix ${UTILDIR}, ${UTILFILES}}

OBJS = ${SRCS:.c=.o}

INC = -I ./

###############################################################################
#                                              SETTINGS                       #
###############################################################################
NAME = ex01

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
CFLAGS += -pthread
FSANITIZE = -fsanitize=address -g

RM = rm -rf
################################################################################
.PHONY: all re fclean clean
###############################################################################
#                                              OPTIONS                        #
###############################################################################

all: ${NAME}

${NAME}: ${OBJS}
	@${CC}  ${CFLAGS} ${OBJS} -o ${NAME}
	@printf "\n${God}${BIGreen}[Create] ${BIBlue}Philo${NoColor}${NoColor}${God}\n"

${LFT_NAME}:
	@make -s -C ${LIB_DIR}

%.o: %.c
	@${CC} -c ${CFLAGS} $^ -o $@ ${INC}
	@printf "${BIGreen}[Compiled]${BIBlue} $^ ${NoColor}to ${BIPurple}$@ ${NoColor}                       \r"

re: fclean all

clean:
	@${RM} ${OBJS}
	@printf "${Bad}${BIRed}Delete *.o${NoColor}${Bad}\n"

fclean: clean
	@${RM} ${NAME}
	@printf "${Bad}${BIRed}Delete ${NAME}${NoColor}${Bad}\n"

################################################################################
