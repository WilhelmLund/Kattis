#include <iostream>
#include <math.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int l = stoi(s);
	cin >> s;
	int r = stoi(s);

	if(l == 0 && r == 0){
		cout << "Not a moose" << endl;
		return 0;
	}
	else if(l == r){
		cout << "Even " << l*2 << endl;
		return 0;
	}
	else{
		cout << "Odd " << max(l,r)*2 << endl;
	}
}
