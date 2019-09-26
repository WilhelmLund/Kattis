#include <iostream>
#include <math.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int r = stoi(s);
	cin >> s;
	int c = stoi(s);
	double ratio = 100*(M_PI*(r-c)*(r-c))/(M_PI*r*r);
	cout.precision(10);
	cout << ratio << endl;
}