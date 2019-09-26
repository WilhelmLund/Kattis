#include <iostream>

using namespace std;

int main(){
	int characters[26] = {0}, count = -1;
	string s;
	cin >> s;
	for(char& c : s)
		characters[c-'a']++;
	for(int& i : characters)
		if(i%2) count++;
	count = max(count, 0);
	cout << count << endl;
}