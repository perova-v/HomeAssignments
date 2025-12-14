PROJECT = transformers
LIBPROJECT = $(PROJECT).a
TESTPROJECT = test-$(PROJECT)

CXX = g++
A = ar
AFLAGS = rsv
CXXFLAGS = -I. -std=c++17 -Wall -g -fPIC
LDXXFLAGS = $(CXXFLAGS) -L. -l:$(LIBPROJECT)
LDGTESTFLAGS = $(LDXXFLAGS) -lgtest -lgtest_main -lpthread

DEPS = $(wildcard *.h)

OBJ = Weapon.o Engine.o Transformer.o Autobot.o Decepticon.o Minicon.o

TEST-OBJ = Weapon_test.o Engine_test.o Transformer_test.o Autobot_test.o Decepticon_test.o Minicon_test.o

.PHONY: default all clean cleanall test

default: all

all: $(PROJECT)

%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

$(LIBPROJECT): $(OBJ)
	$(A) $(AFLAGS) $@ $^

$(PROJECT): main.o $(LIBPROJECT)
	$(CXX) -o $@ main.o $(LDXXFLAGS)

$(TESTPROJECT): $(LIBPROJECT) $(TEST-OBJ)
	$(CXX) -o $@ $(TEST-OBJ) $(LDGTESTFLAGS)

test: $(TESTPROJECT)
	./$(TESTPROJECT)

clean:
	rm -f *.o

cleanall: clean
	rm -f $(PROJECT) $(LIBPROJECT) $(TESTPROJECT)
