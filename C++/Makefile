# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -Wextra -std=c++11 -Wunused-private-field

# Executable name
TARGET = main

# Source files
SRCS = Main.cpp Animal.cpp Dog.cpp Cat.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Header files
DEPS = Animal.h Dog.h Cat.h

# Default rule to build the target
all: $(TARGET)

# Rule to link object files to create the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rule to compile source files into object files
%.o: %.cpp $(DEPS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule to remove generated files
clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean