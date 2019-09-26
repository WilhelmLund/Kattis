#include <iostream>
#include <math.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	double r = stod(s);
	cin >> s;
	double m = stod(s);
	cin >> s;
	double c = stod(s);

	double ratio, estimate, area;
	cout.precision(12);
	while(!(r == 0.0 && m == 0 && c == 0)){
		ratio = c/m;
		estimate = 4*r*r*ratio;
		area = M_PI*r*r;

		cout << area << " " << estimate << endl;

		cin >> s;
		r = stod(s);
		cin >> s;
		m = stod(s);
		cin >> s;
		c = stod(s);
	}
	return 0;
}
