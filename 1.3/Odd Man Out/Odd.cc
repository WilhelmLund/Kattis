#include <iostream>
#include <vector>

using namespace std;

int main(){
	string s;
	cin >> s;
	int N = stoi(s);
	vector<int> v;
	bool erased;
	for(int i = 0; i < N; i++){
		v.clear();
		cin >> s;
		int G = stoi(s);
		cin >> s;
		v.push_back(stoi(s));
		for(int j = 1; j < G;  j++){
			erased = false;
			cin >> s;
			int n = stoi(s);
			for(int k = 0; k < v.size(); k++){
				if(v[k] == n){
					v.erase(v.begin() + k);
					erased = true;
				}
			}
			if(!erased){
				v.push_back(n);
			}
		}
		cout << "Case #" << i+1 << ": " << v[0] << endl;
	}
	return 0;
}