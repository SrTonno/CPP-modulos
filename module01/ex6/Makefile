###############################################################################
#                                              FILES                          #
###############################################################################
SRCSDIR = ./
SRCSCFILES = main.cpp


SRCS =	${addprefix ${SRCSDIR}, ${SRCSCFILES}}

OBJS = $(SRCS:%.cpp=objs/%.o)
DEPS = $(OBJS:%.o=%.d)

INC = -I ./

###############################################################################
#                                              SETTINGS                       #
###############################################################################
NAME = ex04

CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98
FSANITIZE = -fsanitize=address -g
CPPFLAGS = -MMD
RM = rm -rf
################################################################################
.PHONY: all re fclean clean
###############################################################################
#                                              OPTIONS                        #
###############################################################################

all: ${NAME}

${NAME}: objs ${OBJS}
	${CC}  ${CFLAGS} ${OBJS} -o ${NAME}
	@printf "\n${God}${BIGreen}[Create] ${BIBlue}${NAME}${NoColor}${NoColor}${God}\n"

${LFT_NAME}:
	@make -s -C ${LIB_DIR}
objs:
	@mkdir -p	objs/srcs

objs/%.o: %.cpp
	#@${CC} -c ${CFLAGS} ${CPPFLAGS} $^ -o $@ ${INC}
	@${CC} -MM -MT $@ $< > $*.d
	@${CC} -c ${CFLAGS} $^ -o $@ ${INC}
	@printf "${BIGreen}[Compiled]${BIBlue} $^ ${NoColor}to ${BIPurple}$@ ${NoColor}                       \r"

-include $(DEPS)


re: fclean all

clean:
	@${RM} objs
	@printf "${Bad}${BIRed}Delete *.o${NoColor}${Bad}\n"

fclean: clean
	@${RM} ${NAME}
	@printf "${Bad}${BIRed}Delete ${NAME}${NoColor}${Bad}\n"

################################################################################
