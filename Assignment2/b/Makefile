PROJECT = calculator
CXX = g++
CXXFLAGS = -Wall -Wextra
SRC = main.cpp calculator.cpp
OBJ = $(SRC:.cpp=.o)

.PHONY: all clean


all: $(PROJECT)

$(PROJECT): $(OBJ)
	$(CXX) -o $@ $^ $(CXXFLAGS)

%.o: %.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)

clean:
	rm -f $(OBJ) $(PROJECT)
