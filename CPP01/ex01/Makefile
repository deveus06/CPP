CXX = g++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror -pedantic
BUILD_DIR = build
SRC_FILES = main.cpp zombieHorde.cpp Zombie.cpp
OBJ_FILES = $(SRC_FILES:%.cpp=$(BUILD_DIR)/%.o)
TARGET = zombie01

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ_FILES)

$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re