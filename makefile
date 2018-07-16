all: pairs.cpp
	g++ -g -Wall -std=c++11 -o pairs pairs.cpp

clean:
	rm -f pairs