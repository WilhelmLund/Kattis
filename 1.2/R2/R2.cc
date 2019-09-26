#include <iostream>

using namespace std;

int main(){
	string R1;
	cin >> R1;
	int r1 = stoi(R1);

	string S;
	cin >> S;
	int s = stoi(S);

	int r2 = s*2 - r1;

	cout << r2;
}