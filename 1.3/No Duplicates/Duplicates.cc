#include <iostream>
#include <string>

using namespace std;

int main(){
	string strings[80];
	string s;
	int index = 0;
	while(cin >> s){
		for(int i = 0; i < index; i++)
			if(s.compare(strings[i]) == 0){
				cout << "no" << endl;
				return 0;
			}

		strings[index++] = s;
	}
	cout << "yes" << endl;
	return 0;
}