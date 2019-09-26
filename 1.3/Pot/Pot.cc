#include <iostream>
#include <math.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int N = stoi(s);
	int x, p, sum = 0;
	for(int i = 0; i < N; i++){
		cin >> s;
		x = stoi(s);
		p = x%10;
		x /= 10;
		sum += static_cast<int>(pow(x, p));
	}
	cout << sum << endl;
}