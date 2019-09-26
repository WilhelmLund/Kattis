#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	int N = stoi(s), sum = 0;
	for(int i = 1; i <= N; i+=2)
		sum += i;
	cout << sum << endl;
	return 0;
}