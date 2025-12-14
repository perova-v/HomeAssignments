PROJECT = transformers
LIBPROJECT = $(PROJECT).a
TESTPROJECT = test-$(PROJECT)

# Compiler settings
CXX = g++
A = ar
AFLAGS = rsv
CXXFLAGS = -I. -std=c++17 -Wall -g -fPIC
LDXXFLAGS = $(CXXFLAGS) -L. -l:$(LIBPROJECT)
LDGTESTFLAGS = $(LDXXFLAGS) -lgtest -lgtest_main -lpthread

# Headers dependency
DEPS = $(wildcard *.h)

# Object files for the library (Your classes)
OBJ = Weapon.o Engine.o Transformer.o Autobot.o Decepticon.o Minicon.o

# Object files for tests
TEST-OBJ = Weapon_test.o Engine_test.o Transformer_test.o Autobot_test.o Decepticon_test.o Minicon_test.o

.PHONY: default all clean cleanall test

default: all

all: $(PROJECT)

# 1. Generic rule to compile .cpp to .o
%.o: %.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

# 2. Create Static Library from class objects
$(LIBPROJECT): $(OBJ)
	$(A) $(AFLAGS) $@ $^

# 3. Build Main Application (Links with the library)
$(PROJECT): main.o $(LIBPROJECT)
	$(CXX) -o $@ main.o $(LDXXFLAGS)

# 4. Build Test Application (Links with the library + GTest)
$(TESTPROJECT): $(LIBPROJECT) $(TEST-OBJ)
	$(CXX) -o $@ $(TEST-OBJ) $(LDGTESTFLAGS)

# Helper targets
test: $(TESTPROJECT)
	./$(TESTPROJECT)

clean:
	rm -f *.o

cleanall: clean
	rm -f $(PROJECT) $(LIBPROJECT) $(TESTPROJECT)
