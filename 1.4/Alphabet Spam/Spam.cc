#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	int frequency[4] = {0}, character;
	for(char& c : s){
		if(c == '_'){
			frequency[0]++;
			continue;
		}
		character = static_cast<int>(c);
		if(character <= 122 && character >= 97){
			frequency[1]++;
			continue;
		}
		else if(character <= 90 && character >= 65){
			frequency[2]++;
			continue;
		}
		else
			frequency[3]++;
	}
	double sum = 0;
	for(int i : frequency)
		sum += i;
	cout.precision(10);
	for(int i = 0; i < 4; i++)
		cout << static_cast<double>(frequency[i])/sum << endl;
}