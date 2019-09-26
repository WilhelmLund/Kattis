#include <iostream>
#include <string>

using namespace std;

int main(){
	string s1;
	cin >> s1;
	string s2;
	cin >> s2;
	size_t pos[s1.length()];

	size_t i = 0;
	for(char& c : s1){
		pos[i] = s2.find(c);
		if(pos[i] >= 0 && pos[i] < s2.length())
			s2.replace(pos[i], 1, 1, '-');
		i++;
	}
	for(i = 1; i < s1.length(); i++)
		if(pos[i] < pos[i-1] || pos[i] > s2.length()){
			cout << "FAIL" << endl;
			return 0;
		}

	cout << "PASS" << endl;
	return 0;
}