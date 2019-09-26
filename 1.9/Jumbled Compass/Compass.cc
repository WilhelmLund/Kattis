#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	int curr = stoi(s);
	cin >> s;
	int dest = stoi(s);

	int dist;
	dist = dest - curr;
	if(dist > 180)
		dist = -360+dist;
	if(dist <= -180)
		dist = 360+dist;

	cout << dist << endl;
	return 0;
}