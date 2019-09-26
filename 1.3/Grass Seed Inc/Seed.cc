#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	long double c = stof(s);
	cin >> s;
	int N = stoi(s);
	long double w, l, tc = 0.0;
	for(int i = 0; i < N; i++){
		cin >> s;
		w = stof(s);
		cin >> s;
		l = stof(s);
		tc += w*l*c;
	}
	cout.precision(15);
	cout << tc << endl;
}