NAME			= megaphone

CXX				= c++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98
RM				= rm -rf

INCLUDES_DIR	= .
SOURCES_DIR		= .
OBJECTS_DIR		= ./objs

INCLUDES		= $(wildcard $(addsuffix /*.hpp, $(INCLUDES_DIR)))
SOURCES			= $(wildcard $(addsuffix /*.cpp, $(SOURCES_DIR)))
OBJECTS			= $(addprefix $(OBJECTS_DIR), $(notdir $(patsubst %.cpp, %.o, $(SOURCES))))

VPATH = $(SOURCES_DIR)

$(OBJECTS_DIR)%.o: %.cpp $(INCLUDES)
					mkdir -p $(OBJECTS_DIR)
					$(CXX) $(CXXFLAGS) -c $< -o $@

all:				$(NAME)

$(NAME):			$(INCLUDES)  $(OBJECTS)
					$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(NAME)

clean:
					$(RM) $(OBJECTS_DIR)

fclean:				clean
					$(RM) $(NAME)

bonus:				all

re:					fclean all