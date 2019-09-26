#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	int x = stoi(s);

	int speed, time, elapsedTime, distance;
	while(x != -1){
		elapsedTime = 0;
		distance = 0;
		for(int i = 0; i < x; i++){
			cin >> s;
			speed = stoi(s);
			cin >> s;
			time = stoi(s) - elapsedTime;
			distance += speed*time;
			elapsedTime += time;
		}
		cout << distance << " miles" << endl;
		cin >> s;
		x = stoi(s);
	}
	return 0;
}