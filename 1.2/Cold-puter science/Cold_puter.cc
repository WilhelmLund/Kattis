#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	int n = stoi(s);

	int coldDays = 0;
	int temp;
	for(int i = 0; i < n; i++){
		cin >> s;
		temp = stoi(s);
		if(temp < 0)
			coldDays++;
	}

	cout << coldDays << endl;
}