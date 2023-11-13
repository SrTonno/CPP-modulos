###############################################################################
#                                              FILES                          #
###############################################################################
SRCSDIR = ./
SRCSCFILES = main.cpp cat.cpp dog.cpp Animal.cpp Brain.cpp


SRCS =	${addprefix ${SRCSDIR}, ${SRCSCFILES}}

OBJS = $(SRCS:%.cpp=objs/%.o)
DEPS = $(OBJS:%.o=%.d)

INC = -I ./

###############################################################################
#                                              SETTINGS                       #
###############################################################################
NAME = ex02

CPP = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
FSANITIZE = -fsanitize=address -g
CPPFLAGS += -MMD
RM = rm -rf


################################################################################
.PHONY: all re fclean clean sanitize
###############################################################################
#                                              OPTIONS                        #
###############################################################################

all: ${NAME}

${NAME}: objs ${OBJS}
	${CPP}  ${CPPFLAGS} ${OBJS} -o ${NAME}
	@printf "\n${God}${BIGreen}[Create] ${BIBlue}${NAME}${NoColor}${NoColor}${God}\n"

${LFT_NAME}:
	@make -s -C ${LIB_DIR}
objs:
	@mkdir -p	objs/srcs

objs/%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@ ${INC}
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
