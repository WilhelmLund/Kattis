#include <iostream>

using namespace std;

int main(){
	int correct[6] = {1, 1, 2, 2, 2, 8};
	string s;
	int tmp;
	int input[6];

	for(int i = 0; i < 6; i++){
		cin >> s;
		tmp = stoi(s);
		input[i] = tmp;
	}

	int output[5];
	for(int i = 0; i < 6; i++)
		output[i] = correct[i] - input[i];

	for(int i = 0; i < 5; i++)
		cout << output[i] << " ";
	cout << output[5] << endl;
}