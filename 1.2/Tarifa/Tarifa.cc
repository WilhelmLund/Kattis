#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
	string x;
	cin >> x;
	int X = stoi(x);

	string n;
	cin >> n;
	int N = stoi(n);

	int Xt = X;
	string p;
	int P;

	for(int i = 0; i < N; i++){
		cin >> p;
		P = stoi(p);
		Xt += X;
		Xt -= P;
	}

	cout << Xt;
}