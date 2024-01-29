CXX = g++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror -pedantic
BUILD_DIR = build
SRC_FILES = main.cpp Dog.cpp Cat.cpp AAnimal.cpp Brain.cpp
OBJ_FILES = $(SRC_FILES:%.cpp=$(BUILD_DIR)/%.o)
DEP_FILES = $(OBJ_FILES:.o=.d)
TARGET = abstract

all: $(TARGET)

$(TARGET): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ_FILES)

$(BUILD_DIR)/%.o: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@ -I.

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(TARGET)
	rm -f $(DEP_FILES)

re: fclean all

.PHONY: all clean fclean re