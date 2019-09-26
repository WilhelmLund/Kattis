#include <iostream>

using namespace std;

int sum(int x){
	int dsum = 0;
	while(x != 0){
		dsum += x%10;
		x /= 10;
	}
	return dsum;
}

int main(){
	string s;
	int N, factor, dsum;
	while(cin >> s){
		N = stoi(s);
		if(N == 0)
			break;
		factor = 11;
		dsum = sum(N);
		while(dsum != sum(N*factor))
			factor++;
		cout << factor << endl;
	}
}