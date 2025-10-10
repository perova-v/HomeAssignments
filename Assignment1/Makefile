PROJECT = hello
CXX = g++
CXXFLAGS = -Wall -Wextra
SRC = main.cpp hello.cpp
OBJ = $(SRC:.cpp=.0)

.PHONY: all clean

all: $(PROJECT)

$(PROJECT): $(OBJ)
        $(CXX) -o $@ $^ $(CXXFLAGS)

%.0: %.cpp
        $(CXX) -c -o $@ $< $(CXXFLAGS)

clean:
        rm -f $(OBJ) $(PROJECT)
