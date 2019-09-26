#include <iostream>
#include <math.h>

using namespace std;

int main(){
	string s;
	cin >> s;
	int N = stoi(s);
	cin >> s;
	int W = stoi(s);
	cin >> s;
	int H = stoi(s);
	double maxi = sqrt(W*W + H*H);
	int L;

	for(int i = 0; i < N; i++){
		cin >> s;
		L = stoi(s);
		if(L <= maxi)
			cout << "DA" << endl;
		else
			cout << "NE" << endl; 
	}
}