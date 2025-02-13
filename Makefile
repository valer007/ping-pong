# Variables
CXX = g++
CXXFLAGS = -std=c++17 -I/opt/homebrew/opt/raylib/include
LDFLAGS = -L/opt/homebrew/opt/raylib/lib -lraylib -framework OpenGL -framework Cocoa -framework IOKit -framework CoreFoundation
TARGET = run
SRC = main.cpp ball.cpp paddle.cpp cpuPaddle.cpp color.cpp


# Default target: Build the executable
all: $(TARGET)

# Link and build the executable directly from the source files
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC) $(LDFLAGS)

# Clean target: Remove the executable
clean:
	rm -f $(TARGET)
