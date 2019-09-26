#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;
	int N = stoi(s), courses, date1, date2;
	string name;
	for(int i = 0; i < N; i++){
		cin >> s;
		name = s;
		cin >> s;
		date1 = stoi(s.substr(0,4));
		cin >> s;
		date2 = stoi(s.substr(0,4));
		cin >> s;
		courses = stoi(s);
		if(date1 > 2009 || date2 > 1990)
			cout << name << " eligible" << endl;
		else if(courses > 40)
			cout << name << " ineligible" << endl;
		else
			cout << name << " coach petitions" << endl;
	}
}