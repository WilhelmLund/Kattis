#include <iostream>

using namespace std;

int main(){
	string s;
	cin >> s;
	int X = stoi(s);
	cin >> s;
	int Y = stoi(s);
	cin >> s;
	int N = stoi(s);

	bool x,y;
	for(int i = 1; i <= N; i++){
		i%X == 0 ? x=true : x=false; 
		i%Y == 0 ? y=true : y=false;
		if(x)
			cout << "Fizz";
		if(y)
			cout << "Buzz";
		if(!x && !y)
			cout << i;
		cout << endl; 
	}
	return 0;
}