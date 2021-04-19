# Simple Makefile for Euclid's GCD algorithm
euclid: euclid.cpp
#	Make an output dir to hold the executable
	mkdir -p ~/euclid
#	Build the example with default build flags
	g++ -o ~/euclid/euclid -std=c++11 euclid.cpp

# Remove all object files
clean:
	rm *.o