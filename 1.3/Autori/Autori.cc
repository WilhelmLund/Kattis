#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;
	stringstream ss;
	ss << s.at(0);
	for(int i = 1; i < s.length(); i++)
		if(isupper(s.at(i)))
			ss << s.at(i);

	string res;
	ss >> res;
	cout << res << endl;
	return 0;
}