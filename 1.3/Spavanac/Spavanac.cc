#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	int h = stoi(s);
	cin >> s;
	int m = stoi(s);

	if(m >= 45)
		cout << h << " " << m-45 << endl;
	else if(h == 0)
		cout << 23 << " " << 60 + (m-45) << endl;
	else
		cout << h-1 << " " << 60 + (m-45) << endl;

	return 0;
}