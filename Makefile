CXX = g++
CXXFLAGS = -std=c++14 -Wall

SRC = src/main.cpp

run:
	$(CXX) $(CXXFLAGS) $(SRC) -o  run

clean:
	rm -f run