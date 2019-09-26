#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	int N = stoi(s), x;
	for(int i = 0; i < N; i++){
		cin >> s;
		x = stoi(s);
		if(x%2 == 0)
			cout << x << " is even" << endl;
		else
			cout << x << " is odd" << endl;
	}
}