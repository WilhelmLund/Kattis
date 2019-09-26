#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool comp (int i,int j) { return (i<j); }

int main(){
	string s;
	cin >> s;
	int N = stoi(s), n, diff;
	vector<int> sequence;
	bool b;
	for(int i = 0; i < N; i++){
		sequence.clear();
		b = true;
		cin >> s;
		n = stoi(s);
		for(int j = 0; j < n; j++){
			cin >> s;
			sequence.push_back(stoi(s));
		}
		diff = sequence[1]-sequence[0];
		for(int j = 1; j < n-1; j++){
			if(sequence[j+1]-sequence[j] != diff){ 
				b = false;
				break;
			}
		}
		if(b){
			cout << "arithmetic" << endl;
			continue;
		}
		else{
			b = true;
			sort(sequence.begin(), sequence.end(), comp);
			diff = sequence[1]-sequence[0];
			for(int j = 1; j < n-1; j++){
				if(sequence[j+1]-sequence[j] != diff){ 
					b = false;
					break;
				}
			}
			if(b){
				cout << "permuted arithmetic" << endl;
				continue;
			}
			else{
				cout << "non-arithmetic" << endl;
			}
		}
	}
	return 0;
}