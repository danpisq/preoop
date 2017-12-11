CXX=g++
CXXFLAGS=-c
LFLAGS=-Wall -Wextra -pedantic -g
SRC=$(wildcard *.cpp)
OBJS=$(SRC:.cpp=.o)
TARGET=Array


all: $(SRC) $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

.cpp.o:
	$(CXX) $(CXXFLAGS) $< -o $@ $(LFLAGS)

clean:
	rm *.o $(TARGET)

run:
	./$(TARGET)

