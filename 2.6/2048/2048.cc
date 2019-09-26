#include <iostream>

using namespace std;

int main(){
	string s;
	int grid[4][4];
	for(int i = 0; i < 16; i++){
		cin >> s;
		grid[i/4][i%4] = stoi(s);
	}
	cin >> s;
	int direction = stoi(s);
}