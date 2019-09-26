#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){
	string s;
	cin >> s;
	reverse(s.begin(), s.end());
	int x = stoi(s);
	cin >> s;
	reverse(s.begin(), s.end());
	int y = stoi(s);
	cout << max(x,y) << endl;
}