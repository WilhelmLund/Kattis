#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

string fibbin(int x, vector<string>& v){
	if(x < v.size()){
		return v[x];
	}
	else{
		v.push_back(v[v.size()-1]+v[v.size()-2]);
		return fibbin(x, v);
	}
}

int main(){
	string s, bin;
	int lap = 1, pos, count;
	vector<string> v = vector<string>();
	v.push_back("0");
	v.push_back("1");
	while(cin >> s){
		string binaryString = fibbin(stoi(s), v);
		pos = 0;
		count = 0;
		cin >> bin;
		while((pos=binaryString.find(bin, pos)) != -1){
			pos++;
			count++;
		}
		cout << "Case " << lap++ << ": " << count << endl;
	}
	return 0;
}
