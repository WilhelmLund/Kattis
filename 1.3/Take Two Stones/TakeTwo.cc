#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	int N = stoi(s);
	if(N%2)
		cout << "Alice" << endl;
	else
		cout << "Bob" << endl;
}