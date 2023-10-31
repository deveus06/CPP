# Define compiler and compiler flags
CXX = g++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror -pedantic

# Define the build directory
BUILD_DIR = build

# Define the source files and object files
SRC_FILES = ex00.cpp
OBJ_FILES = $(SRC_FILES:%.cpp=$(BUILD_DIR)/%.o)

# Define the target executable
TARGET = megaphone

# Default target: build the program
all: $(TARGET)

# Link the object files into the executable
$(TARGET): $(OBJ_FILES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJ_FILES)

# Compile each source file into an object file
$(BUILD_DIR)/%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Remove the object files and the executable
clean:
	rm -f $(OBJ_FILES) $(TARGET)