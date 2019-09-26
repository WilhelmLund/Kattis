#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	int n = stoi(s);

	for(int i = 0; i < n; i++){
		cin >> s;
		int r = stoi(s);
		cin >> s;
		int e = stoi(s);
		cin >> s;
		int c = stoi(s);

		if(r < (e-c))
			cout << "advertise" << endl;
		else if(r == (e-c))
			cout << "does not matter" << endl;
		else
			cout << "do not advertise" << endl;
	}
	return 0;
}