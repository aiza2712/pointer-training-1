CXX = g++
CXXFLAGS = -std=c++11 -Wall

SRC = src/main.cpp

run:
	$(CXX) $(CXXFLAGS) $(SRC) -o  run

clean:
	rm -f run