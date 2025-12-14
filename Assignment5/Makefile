PROJECT = matrix_test
CXX = g++

CXXFLAGS = -Wall -Wextra -Werror -std=c++17 -g -fsanitize=address
LDFLAGS = -lgtest -lgtest_main -lpthread -fsanitize=address

SRC = Rational.cpp test.cpp
OBJ = $(SRC:.cpp=.o)

.PHONY: all clean format

all: $(PROJECT)

$(PROJECT): $(OBJ)
	$(CXX) -o $@ $^ $(LDFLAGS)

%.o: %.cpp
	$(CXX) -c -o $@ $< $(CXXFLAGS)

format:
	astyle -A1 -s4 *.cpp *.h

clean:
	rm -f $(OBJ) $(PROJECT) *.orig
