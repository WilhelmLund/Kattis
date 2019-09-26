#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	int A = stoi(s);
	cin >> s;
	int B = stoi(s);
	cin >> s;
	int C = stoi(s);
	cin >> s;
	int D = stoi(s);
	int visitors[3];
	for(int i = 0; i < 3; i++){
		cin >> s;
		visitors[i] = stoi(s);
	}
	int dogs;
	for(int i = 0; i < 3; i++){
		dogs = 0;
		if(visitors[i]%(A+B) <= A && visitors[i]%(A+B) > 0) dogs++;
		if(visitors[i]%(C+D) <= C && visitors[i]%(C+D) > 0) dogs++;

		if(dogs == 0)
			cout << "none" << endl;
		else if(dogs == 1)
			cout << "one" << endl;
		else
			cout << "both" << endl;
	}
}