# Example Makefile

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++17 -O2 -fexpensive-optimizations -pipe -Wall -Weffc++ $(ARCHFLAGS)

# Source files
SRCS = main.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Executable
EXEC = chess

# Default target
all: $(EXEC)

# Linking
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(EXTRALDFLAGS) -o $@ $^

# Compilation
%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(EXTRACXXFLAGS) -c $< -o $@

# Strip target
strip: $(EXEC)
	strip $(EXEC)

# Clean up
clean:
	rm -f $(OBJS) $(EXEC)