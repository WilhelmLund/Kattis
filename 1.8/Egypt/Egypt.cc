#include <iostream>
#include <math.h>

using namespace std;

int main(){
	string s;
	double a, a1, b, b1, c, c1;
	while(true){
		cin >> s;
		a1 = stod(s);
		cin >> s;
		b1 = stod(s);
		cin >> s;
		c1 = stod(s);
		if(a1 == 0.0 && b1 == 0.0 & c1 == 0.0)
			break;
		c = max(max(a1, b1), c1);
		a = a1;
		if(a == c)
			a = c1;
		b = b1;
		if(b == c)
			b = c1;
		if(c == a && c == b){
			cout << "wrong" << endl;
			continue;
		}
		if(sqrt(a*a + b*b) == c){
			cout << "right" << endl;
		}
		else
			cout << "wrong" << endl;
	}
	return 0;
}