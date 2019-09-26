#include <iostream>
#include <string>

using namespace std;

void rotate(string& s){
	int sum = 0;
	for(char& c : s){
		sum += static_cast<int>(c-'A');
	}
	sum = sum%26;
	for(char& c : s){
		c += sum;
		if(static_cast<int>(c) > 90)
			c -= 26;
	}
}

void merge(string& s1, string& s2){
	int length = s1.length(), i=0;
	for(char& c : s1){
		c += static_cast<int>(s2.at(i) - 'A');
		if(static_cast<int>(c) > 90)
			c -= 26;
		i++;
	}
}

int main(){
	string s;
	cin >> s;
	int length = s.length();
	string s1 = s.substr(0, length/2);
	string s2 = s.substr(length/2, length-1);

	rotate(s1);
	rotate(s2);

	merge(s1, s2);
	cout << s1 << endl;
}