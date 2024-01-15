CXX = g++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror -pedantic
BUILD_DIR = build
SRC_FILES = main.cpp Weapon.cpp HumanB.cpp HumanA.cpp
OBJ_FILES = $(SRC_FILES:%.cpp=$(BUILD_DIR)/%.o)
DEP_FILES = $(OBJ_FILES:.o=.d)
TARGET = Humans

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ_FILES)

$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@ -I.

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(TARGET)
	rm -f $(DEP_FILES)

re: fclean all

-include $(DEP_FILES)

.PHONY: all clean fclean re