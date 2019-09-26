#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){
	string s;
	int dist[4];
	cin >> s;
	dist[0] = stoi(s);
	cin >> s;
	dist[1] = stoi(s);
	cin >> s;
	dist[2] = stoi(s);
	cin >> s;
	dist[3] = stoi(s);

	sort(dist, dist+4);
	int area = min(dist[0], dist[1])*min(dist[2], dist[3]);

	cout << area << endl;
}