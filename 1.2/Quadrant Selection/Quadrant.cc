#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	int x = stoi(s);

	cin >> s;
	int y = stoi(s);

	if(x > 0){
		if(y > 0){
			cout << 1;
			return 0;
		}
		cout << 4;
		return 0;
	}
	if(y > 0){
		cout << 2;
		return 0;
	}
	cout << 3;
	return 0;
}