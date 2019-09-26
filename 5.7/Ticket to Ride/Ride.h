#ifndef RIDE_H
#define RIDE_H

#include <iostream>
#include <vector> 

typedef struct {
	std::string name;
	std::vector<Edge> edges;
}City;

typedef struct {
	City c1, c2;
	int distance;
}Edge;

#endif