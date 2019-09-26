#include "Ride.h"
#include <algorithm>

using namespace std;

int main(){
	string s;
	cin >> s;
	int N = stoi(s);
	cin >> s;
	int M = stoi(s);

	vector<City> cities = vector<City>();
	City c;
	for(int i = 0; i < N; i++){
		cin >> s;
		c.name = s;
		c.edges = vector<Edge>();
		cities.push_back(c);
	}
}