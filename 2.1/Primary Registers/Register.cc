#include <iostream>

using namespace std;

int prodRegister(int r[], int i){
	int sum = r[--i];
	while(--i >= 0){
		sum *= r[i];
	}
	return sum;
}

int main(){
	string s;
	int registers[8] = {2, 3, 5, 7, 11, 13, 17, 19};
	int values[8];
	for(int i = 0; i < 8; i++){
		cin >> s;
		values[i] = stoi(s);
	}
	int sum = 0;
	for(int i = 7; i > 0; i--)
		sum += (registers[i] - values[i] - 1) * prodRegister(registers, i);
	
	if(values[0] == 0)
		sum++;

	cout << sum << endl;
}