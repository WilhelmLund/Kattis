#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	int N = stoi(s);
	string universities[12];
	string winners[12];
	int count = 0;

	bool present = false;
	while(count < 12){
		cin >> s;
		for(int j = 0; j < count; j++){
			if(s.compare(universities[j]) == 0){
				present = true;
				break;
			}
		}
		if(!present){
			universities[count] = s;
			cin >> s;
			winners[count++] = s;
		}
		else{
			cin >> s;
		}
		present = false;
	}

	for(int i = 0; i < 12; i++)
		cout << universities[i] << " " << winners[i] << endl;
}