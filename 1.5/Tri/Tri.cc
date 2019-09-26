#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	int a = stoi(s);
	cin >> s;
	int b = stoi(s);
	cin >> s;
	int c = stoi(s);

	if(a+b == c)
		cout << a << "+" << b << "=" << c << endl;
	else if(a-b == c)
		cout << a << "-" << b << "=" << c << endl;
	else if(a/b == c)
		cout << a << "/" << b << "=" << c << endl;
	else if(a*b == c)
		cout << a << "*" << b << "=" << c << endl;
	else if(a == b+c)
		cout << a << "=" << b << "+" << c << endl;
	else if(a == b-c)
		cout << a << "=" << b << "-" << c << endl;
	else if(a == b*c)
		cout << a << "=" << b << "*" << c << endl;
	else
		cout << a << "=" << b << "/" << c << endl;
	return 0;
}