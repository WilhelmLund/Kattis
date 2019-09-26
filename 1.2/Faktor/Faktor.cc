#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	int A = stoi(s);
	cin >> s;
	int I = stoi(s);

	int res = A*I - A + 1;
	cout << res << endl;
}