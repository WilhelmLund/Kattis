#include <iostream>
#include <math.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	double power = stod(s);

	int n = static_cast<int>(pow(2.0, power) + 1.0);

	cout << n*n;
}