#include <iostream>

using namespace std;

int main(){
	string s; 
	cin >> s;
	int N = stoi(s),b;
	double t;

	for(int i = 0; i < N; i++){
		cin >> s;
		b = stoi(s);
		cin >> s;
		t = stod(s);

		cout << 60.0/(t/static_cast<double>(b-1)) << " " << static_cast<double>(b)*60.0/t << " " << 60.0/(t/static_cast<double>(b+1)) << endl;
	}
}