#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main(){
	string s;
	long long a, b, diff;
	while(cin >> s){
		a = stoll(s);
		cin >> s;
		b = stoll(s);
		diff = llabs(a-b);
		cout << diff << endl;
	}
}