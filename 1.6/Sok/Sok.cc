#include <iostream>
#include <math.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	double A = stod(s);
	cin >> s;
	double B = stod(s);
	cin >> s;
	double C = stod(s);

	cin >> s;
	double I = stod(s);
	cin >> s;
	double J = stod(s);
	cin >> s;
	double K = stod(s);

	double r1 = A/I;
	double r2 = B/J;
	double r3 = C/K;

	double r = min(min(r1, r2), r3);

	double Ar = A - I*r;
	double Br = B - J*r;
	double Cr = C - K*r;

	cout.precision(10);
	cout << Ar << " " << Br << " " << Cr << endl;
}