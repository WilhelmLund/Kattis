#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;
	char c = s.at(0);
	s = s.substr(1, s.length());
	int length = s.length(), count = 0, i = 0;

	if(c != 'U'){
		count++;
		i++;
	}
	for(; i < length; i++)
		if(s.at(i) != 'U')
			count += 2;
	cout << count << endl;

	count = 0;
	i = 0;
	if(c != 'D'){
		count++;
		i++;
	}
	for(; i < length; i++)
		if(s.at(i) != 'D')
			count += 2;
	cout << count << endl;

	count  = 0;
	for(i = 0; i < length; i++)
		if(c != s.at(i)){
			count++;
			c = s.at(i);
		}
	cout << count << endl;
	return 0;
}