#include <iostream>

using namespace std;

int main(){
	string s;
	int sums[5] = {0, 0, 0, 0, 0};
	for(int i = 0; i < 5; i++)
		for(int j = 0; j < 4; j++){
			cin >> s;
			sums[i] += stoi(s);
		}

	int index, sum = 0;
	for(int i = 0; i < 5; i++)
		if(sums[i] > sum){
			sum = sums[i];
			index = i;
		}

	cout << index+1 << " " << sums[index] << endl;
	return 0;
}