#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	int N = stoi(s), a, b, c;
	for(int i = 0; i < N; i++){
		cin >> s;
		a = stoi(s);
		cin >> s;
		b = stoi(s);
		cin >> s;
		c = stoi(s);
		if(a+b==c || a-b==c || b-a==c || a*b==c || static_cast<double>(a)/static_cast<double>(b)==static_cast<double>(c) || static_cast<double>(b)/static_cast<double>(a)==static_cast<double>(c)){
			cout << "possible" << endl;
			continue;
		}
		cout << "impossible" << endl;
	}
}