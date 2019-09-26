#include <iostream>

using namespace std;

bool testQueens(int q[8][2]){
	for(int i = 0; i < 7; i++){
		for(int j = i+1; j < 8; j++){
			if(q[i][0] == q[j][0]){
				return false;
			}
			if(q[i][1] == q[j][1]){
				return false;
			}
			if(q[i][1]-q[j][1] == q[i][0]-q[j][0]){
				return false;
			}
			if(q[i][1]-q[j][1] == -(q[i][0]-q[j][0])){
				return false;
			}
		}
	}
	return true;
}

int main(){
	string s;
	int queens[8][2], count = 0;
	for(int i = 0; i < 8; i++){
		cin >> s;
		for(int j = 0; j < 8; j++){
			if(s.at(j) == '*'){
				queens[i][0] = i;
				queens[i][1] = j;
				count++;
			}
		}
	}

	bool valid;
	count == 8 ? valid = testQueens(queens) : valid = false;	
	if(valid)
		cout << "valid" << endl;
	else
		cout << "invalid" << endl;
	return 0;
}