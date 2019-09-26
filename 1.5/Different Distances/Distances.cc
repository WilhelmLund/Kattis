#include <iostream>
#include <math.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	double x1 = stod(s), y1, x2, y2, p;
	cout.precision(10);

	while(x1 != 0.0){
		cin >> s;
		y1 = stod(s);
		cin >> s;
		x2 = stod(s);
		cin >> s;
		y2 = stod(s);
		cin >> s;
		p = stod(s);
		double res = pow(pow(fabs(x1 - x2), p) + pow(fabs(y1 - y2), p), 1.0/p);
		cout << res << endl;
		cin >> s;
		x1 = stod(s);
	}
	return 0;
}