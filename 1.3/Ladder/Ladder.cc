#include <iostream>
#include <math.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	double h = stod(s);
	cin >> s;
	double v = stod(s);

	int l = static_cast<int>(ceil(h/sin(v*M_PI/180.0)));
	cout << l << endl;
}