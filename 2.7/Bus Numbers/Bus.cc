#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	string s;
	cin >> s;
	int N = stoi(s);
	int buses[N];
	for(int i = 0; i < N; i++){
		cin >> s;
		buses[i] = stoi(s);
	}
	sort(buses, buses+N);
	for(int i = 0; i < N; i++){
		if(i+1 == N || buses[i]+1 != buses[i+1])
			cout << buses[i];
		else if(buses[i]+1 == buses[i+1]){
			int i2 = i;
			while(i2 < N && buses[i2]+1 == buses[i2+1]){
				i2++;
			}
			if(i2-i > 1)
				cout << buses[i] << "-" << buses[i2];
			else
				cout << buses[i] << " " << buses[i2];
			i = i2;
		}
		if(i < N-1)
			cout << " ";
	}
	cout << endl;
}